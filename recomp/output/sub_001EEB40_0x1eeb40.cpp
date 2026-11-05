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

// Function: sub_001EEB40
// Address: 0x1eeb40 - 0x1eebc8
void sub_001EEB40_0x1eeb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEB40_0x1eeb40");
#endif

    switch (ctx->pc) {
        case 0x1eeb70u: goto label_1eeb70;
        case 0x1eeb90u: goto label_1eeb90;
        default: break;
    }

    ctx->pc = 0x1eeb40u;

    // 0x1eeb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eeb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eeb44: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1eeb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1eeb48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eeb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eeb4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eeb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eeb50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eeb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eeb54: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1eeb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1eeb58: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1eeb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1eeb5c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1eeb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1eeb60: 0x8c504f94  lw          $s0, 0x4F94($v0)
    ctx->pc = 0x1eeb60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1eeb64: 0x8e110258  lw          $s1, 0x258($s0)
    ctx->pc = 0x1eeb64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1eeb68: 0xc08952c  jal         func_2254B0
    ctx->pc = 0x1EEB68u;
    SET_GPR_U32(ctx, 31, 0x1EEB70u);
    ctx->pc = 0x1EEB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB68u;
    // 0x1eeb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2254B0u, 0x1EEB68u, 0x1EEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB70u;
label_1eeb70:
    // 0x1eeb70: 0x8e05025c  lw          $a1, 0x25C($s0)
    ctx->pc = 0x1eeb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x1eeb74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEB74u;
    {
        const bool branch_taken_0x1eeb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB74u;
        // 0x1eeb78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb74) {
            ctx->pc = 0x1EEB98u;
            goto label_1eeb98;
        }
    }
    ctx->pc = 0x1EEB7Cu;
    // 0x1eeb7c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x1eeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x1eeb80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1eeb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb84: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x1eeb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    // 0x1eeb88: 0xc0c362e  jal         func_30D8B8
    ctx->pc = 0x1EEB88u;
    SET_GPR_U32(ctx, 31, 0x1EEB90u);
    ctx->pc = 0x1EEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB88u;
    // 0x1eeb8c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8B8u, 0x1EEB88u, 0x1EEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB90u;
label_1eeb90:
    // 0x1eeb90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEB90u;
    {
        const bool branch_taken_0x1eeb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB90u;
        // 0x1eeb94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb90) {
            ctx->pc = 0x1EEBA4u;
            goto label_1eeba4;
        }
    }
    ctx->pc = 0x1EEB98u;
label_1eeb98:
    // 0x1eeb98: 0x92020280  lbu         $v0, 0x280($s0)
    ctx->pc = 0x1eeb98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1eeb9c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EEB9Cu;
    {
        const bool branch_taken_0x1eeb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb9c) {
            ctx->pc = 0x1EEBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEB9Cu;
            // 0x1eeba0: 0x8603027c  lh          $v1, 0x27C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEBA4u;
            goto label_1eeba4;
        }
    }
    ctx->pc = 0x1EEBA4u;
label_1eeba4:
    // 0x1eeba4: 0x28620045  slti        $v0, $v1, 0x45
    ctx->pc = 0x1eeba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)69) ? 1 : 0);
    // 0x1eeba8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEBA8u;
    {
        const bool branch_taken_0x1eeba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBA8u;
        // 0x1eebac: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeba8) {
            ctx->pc = 0x1EEBB4u;
            goto label_1eebb4;
        }
    }
    ctx->pc = 0x1EEBB0u;
    // 0x1eebb0: 0x240235e3  addiu       $v0, $zero, 0x35E3
    ctx->pc = 0x1eebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
label_1eebb4:
    // 0x1eebb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eebb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eebb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eebb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eebbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eebbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBC0u;
        // 0x1eebc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEBC8u;
}
