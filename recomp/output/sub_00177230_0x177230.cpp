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

// Function: sub_00177230
// Address: 0x177230 - 0x177298
void sub_00177230_0x177230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177230_0x177230");
#endif

    switch (ctx->pc) {
        case 0x177244u: goto label_177244;
        case 0x177260u: goto label_177260;
        case 0x177284u: goto label_177284;
        default: break;
    }

    ctx->pc = 0x177230u;

    // 0x177230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17723c: 0xc04f70e  jal         func_13DC38
    ctx->pc = 0x17723Cu;
    SET_GPR_U32(ctx, 31, 0x177244u);
    ctx->pc = 0x177240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17723Cu;
    // 0x177240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC38u, 0x17723Cu, 0x177244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177244u;
label_177244:
    // 0x177244: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x177244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x177248: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x177248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17724c: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x17724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x177250: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x177250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177254: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x177254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x177258: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x177258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17725c: 0x2602015c  addiu       $v0, $s0, 0x15C
    ctx->pc = 0x17725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
label_177260:
    // 0x177260: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x177260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x177264: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x177264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x177268: 0x0  nop
    ctx->pc = 0x177268u;
    // NOP
    // 0x17726c: 0x0  nop
    ctx->pc = 0x17726cu;
    // NOP
    // 0x177270: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x177270u;
    {
        const bool branch_taken_0x177270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x177274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177270u;
        // 0x177274: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177270) {
            ctx->pc = 0x177260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177260;
        }
    }
    ctx->pc = 0x177278u;
    // 0x177278: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x177278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17727c: 0xc05e014  jal         func_178050
    ctx->pc = 0x17727Cu;
    SET_GPR_U32(ctx, 31, 0x177284u);
    ctx->pc = 0x177280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17727Cu;
    // 0x177280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178050u, 0x17727Cu, 0x177284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177284u;
label_177284:
    // 0x177284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x177284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17728c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17728cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177290: 0x3e00008  jr          $ra
    ctx->pc = 0x177290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177290u;
        // 0x177294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177298u;
}
