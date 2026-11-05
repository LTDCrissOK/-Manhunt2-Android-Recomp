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

// Function: sub_00198100
// Address: 0x198100 - 0x198170
void sub_00198100_0x198100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198100_0x198100");
#endif

    switch (ctx->pc) {
        case 0x198100u: goto label_198100;
        case 0x198104u: goto label_198104;
        case 0x198108u: goto label_198108;
        case 0x19810cu: goto label_19810c;
        case 0x198110u: goto label_198110;
        case 0x198114u: goto label_198114;
        case 0x198118u: goto label_198118;
        case 0x19811cu: goto label_19811c;
        case 0x198120u: goto label_198120;
        case 0x198124u: goto label_198124;
        case 0x198128u: goto label_198128;
        case 0x19812cu: goto label_19812c;
        case 0x198130u: goto label_198130;
        case 0x198134u: goto label_198134;
        case 0x198138u: goto label_198138;
        case 0x19813cu: goto label_19813c;
        case 0x198140u: goto label_198140;
        case 0x198144u: goto label_198144;
        case 0x198148u: goto label_198148;
        case 0x19814cu: goto label_19814c;
        case 0x198150u: goto label_198150;
        case 0x198154u: goto label_198154;
        case 0x198158u: goto label_198158;
        case 0x19815cu: goto label_19815c;
        case 0x198160u: goto label_198160;
        case 0x198164u: goto label_198164;
        case 0x198168u: goto label_198168;
        case 0x19816cu: goto label_19816c;
        default: break;
    }

    ctx->pc = 0x198100u;

label_198100:
    // 0x198100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_198104:
    // 0x198104: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x198104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_198108:
    // 0x198108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19810c:
    // 0x19810c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19810cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_198110:
    // 0x198110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198114:
    // 0x198114: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_198118:
    // 0x198118: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_19811c:
    if (ctx->pc == 0x19811Cu) {
        ctx->pc = 0x19811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198118u;
        // 0x19811c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198120u;
        goto label_198120;
    }
    ctx->pc = 0x198118u;
    {
        const bool branch_taken_0x198118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198118) {
            ctx->pc = 0x19811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198118u;
            // 0x19811c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198160u;
            goto label_198160;
        }
    }
    ctx->pc = 0x198120u;
label_198120:
    // 0x198120: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x198120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198124:
    // 0x198124: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_198128:
    if (ctx->pc == 0x198128u) {
        ctx->pc = 0x198128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198124u;
        // 0x198128: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19812Cu;
        goto label_19812c;
    }
    ctx->pc = 0x198124u;
    {
        const bool branch_taken_0x198124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198124u;
        // 0x198128: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198124) {
            ctx->pc = 0x19813Cu;
            goto label_19813c;
        }
    }
    ctx->pc = 0x19812Cu;
label_19812c:
    // 0x19812c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_198130:
    // 0x198130: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_198134:
    // 0x198134: 0x40f809  jalr        $v0
label_198138:
    if (ctx->pc == 0x198138u) {
        ctx->pc = 0x19813Cu;
        goto label_19813c;
    }
    ctx->pc = 0x198134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19813Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198134u, 0x19813Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19813Cu;
label_19813c:
    // 0x19813c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19813cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_198140:
    // 0x198140: 0xc061a12  jal         func_186848
label_198144:
    if (ctx->pc == 0x198144u) {
        ctx->pc = 0x198144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198140u;
        // 0x198144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198148u;
        goto label_198148;
    }
    ctx->pc = 0x198140u;
    SET_GPR_U32(ctx, 31, 0x198148u);
    ctx->pc = 0x198144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198140u;
    // 0x198144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x198140u, 0x198148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198148u;
label_198148:
    // 0x198148: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x198148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19814c:
    // 0x19814c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198150:
    // 0x198150: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_198154:
    // 0x198154: 0x40f809  jalr        $v0
label_198158:
    if (ctx->pc == 0x198158u) {
        ctx->pc = 0x198158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198154u;
        // 0x198158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19815Cu;
        goto label_19815c;
    }
    ctx->pc = 0x198154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19815Cu);
        ctx->pc = 0x198158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198154u;
        // 0x198158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198154u, 0x19815Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19815Cu;
label_19815c:
    // 0x19815c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19815cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198160:
    // 0x198160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x198160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_198164:
    // 0x198164: 0x3e00008  jr          $ra
label_198168:
    if (ctx->pc == 0x198168u) {
        ctx->pc = 0x198168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198164u;
        // 0x198168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19816Cu;
        goto label_19816c;
    }
    ctx->pc = 0x198164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198164u;
        // 0x198168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19816Cu;
label_19816c:
    // 0x19816c: 0x0  nop
    ctx->pc = 0x19816cu;
    // NOP
    ctx->pc = 0x198170u;
}
