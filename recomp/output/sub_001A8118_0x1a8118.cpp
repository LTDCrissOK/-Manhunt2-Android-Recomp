#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8118
// Address: 0x1a8118 - 0x1a8178
void sub_001A8118_0x1a8118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8118_0x1a8118");
#endif

    switch (ctx->pc) {
        case 0x1a8118u: goto label_1a8118;
        case 0x1a811cu: goto label_1a811c;
        case 0x1a8120u: goto label_1a8120;
        case 0x1a8124u: goto label_1a8124;
        case 0x1a8128u: goto label_1a8128;
        case 0x1a812cu: goto label_1a812c;
        case 0x1a8130u: goto label_1a8130;
        case 0x1a8134u: goto label_1a8134;
        case 0x1a8138u: goto label_1a8138;
        case 0x1a813cu: goto label_1a813c;
        case 0x1a8140u: goto label_1a8140;
        case 0x1a8144u: goto label_1a8144;
        case 0x1a8148u: goto label_1a8148;
        case 0x1a814cu: goto label_1a814c;
        case 0x1a8150u: goto label_1a8150;
        case 0x1a8154u: goto label_1a8154;
        case 0x1a8158u: goto label_1a8158;
        case 0x1a815cu: goto label_1a815c;
        case 0x1a8160u: goto label_1a8160;
        case 0x1a8164u: goto label_1a8164;
        case 0x1a8168u: goto label_1a8168;
        case 0x1a816cu: goto label_1a816c;
        case 0x1a8170u: goto label_1a8170;
        case 0x1a8174u: goto label_1a8174;
        default: break;
    }

    ctx->pc = 0x1a8118u;

label_1a8118:
    // 0x1a8118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a811c:
    // 0x1a811c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a8120:
    // 0x1a8120: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x1a8120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_1a8124:
    // 0x1a8124: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a8128:
    if (ctx->pc == 0x1A8128u) {
        ctx->pc = 0x1A8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8124u;
        // 0x1a8128: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A812Cu;
        goto label_1a812c;
    }
    ctx->pc = 0x1A8124u;
    {
        const bool branch_taken_0x1a8124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8124u;
        // 0x1a8128: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8124) {
            ctx->pc = 0x1A814Cu;
            goto label_1a814c;
        }
    }
    ctx->pc = 0x1A812Cu;
label_1a812c:
    // 0x1a812c: 0x8c440388  lw          $a0, 0x388($v0)
    ctx->pc = 0x1a812cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
label_1a8130:
    // 0x1a8130: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1a8134:
    // 0x1a8134: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x1a8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_1a8138:
    // 0x1a8138: 0x40f809  jalr        $v0
label_1a813c:
    if (ctx->pc == 0x1A813Cu) {
        ctx->pc = 0x1A8140u;
        goto label_1a8140;
    }
    ctx->pc = 0x1A8138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8140u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8138u, 0x1A8140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8140u;
label_1a8140:
    // 0x1a8140: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a8140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8144:
    // 0x1a8144: 0x38430023  xori        $v1, $v0, 0x23
    ctx->pc = 0x1a8144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)35);
label_1a8148:
    // 0x1a8148: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1a8148u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1a814c:
    // 0x1a814c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8150:
    // 0x1a8150: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a8150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8154:
    // 0x1a8154: 0x3e00008  jr          $ra
label_1a8158:
    if (ctx->pc == 0x1A8158u) {
        ctx->pc = 0x1A8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8154u;
        // 0x1a8158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A815Cu;
        goto label_1a815c;
    }
    ctx->pc = 0x1A8154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8154u;
        // 0x1a8158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A815Cu;
label_1a815c:
    // 0x1a815c: 0x0  nop
    ctx->pc = 0x1a815cu;
    // NOP
label_1a8160:
    // 0x1a8160: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a8160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a8164:
    // 0x1a8164: 0x0  nop
    ctx->pc = 0x1a8164u;
    // NOP
label_1a8168:
    // 0x1a8168: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a8168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a816c:
    // 0x1a816c: 0x0  nop
    ctx->pc = 0x1a816cu;
    // NOP
label_1a8170:
    // 0x1a8170: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1a8170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a8174:
    // 0x1a8174: 0x0  nop
    ctx->pc = 0x1a8174u;
    // NOP
    ctx->pc = 0x1a8178u;
}
