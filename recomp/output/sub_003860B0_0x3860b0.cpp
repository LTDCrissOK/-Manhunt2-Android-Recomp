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

// Function: sub_003860B0
// Address: 0x3860b0 - 0x386128
void sub_003860B0_0x3860b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003860B0_0x3860b0");
#endif

    switch (ctx->pc) {
        case 0x3860b0u: goto label_3860b0;
        case 0x3860b4u: goto label_3860b4;
        case 0x3860b8u: goto label_3860b8;
        case 0x3860bcu: goto label_3860bc;
        case 0x3860c0u: goto label_3860c0;
        case 0x3860c4u: goto label_3860c4;
        case 0x3860c8u: goto label_3860c8;
        case 0x3860ccu: goto label_3860cc;
        case 0x3860d0u: goto label_3860d0;
        case 0x3860d4u: goto label_3860d4;
        case 0x3860d8u: goto label_3860d8;
        case 0x3860dcu: goto label_3860dc;
        case 0x3860e0u: goto label_3860e0;
        case 0x3860e4u: goto label_3860e4;
        case 0x3860e8u: goto label_3860e8;
        case 0x3860ecu: goto label_3860ec;
        case 0x3860f0u: goto label_3860f0;
        case 0x3860f4u: goto label_3860f4;
        case 0x3860f8u: goto label_3860f8;
        case 0x3860fcu: goto label_3860fc;
        case 0x386100u: goto label_386100;
        case 0x386104u: goto label_386104;
        case 0x386108u: goto label_386108;
        case 0x38610cu: goto label_38610c;
        case 0x386110u: goto label_386110;
        case 0x386114u: goto label_386114;
        case 0x386118u: goto label_386118;
        case 0x38611cu: goto label_38611c;
        case 0x386120u: goto label_386120;
        case 0x386124u: goto label_386124;
        default: break;
    }

    ctx->pc = 0x3860b0u;

label_3860b0:
    // 0x3860b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3860b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3860b4:
    // 0x3860b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3860b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3860b8:
    // 0x3860b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3860b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3860bc:
    // 0x3860bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3860bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3860c0:
    // 0x3860c0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_3860c4:
    if (ctx->pc == 0x3860C4u) {
        ctx->pc = 0x3860C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860C0u;
        // 0x3860c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860C8u;
        goto label_3860c8;
    }
    ctx->pc = 0x3860C0u;
    {
        const bool branch_taken_0x3860c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3860C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860C0u;
        // 0x3860c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860c0) {
            ctx->pc = 0x386110u;
            goto label_386110;
        }
    }
    ctx->pc = 0x3860C8u;
label_3860c8:
    // 0x3860c8: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x3860c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3860cc:
    // 0x3860cc: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_3860d0:
    if (ctx->pc == 0x3860D0u) {
        ctx->pc = 0x3860D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860CCu;
        // 0x3860d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860D4u;
        goto label_3860d4;
    }
    ctx->pc = 0x3860CCu;
    {
        const bool branch_taken_0x3860cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3860D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860CCu;
        // 0x3860d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860cc) {
            ctx->pc = 0x386118u;
            goto label_386118;
        }
    }
    ctx->pc = 0x3860D4u;
label_3860d4:
    // 0x3860d4: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x3860d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3860d8:
    // 0x3860d8: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_3860dc:
    if (ctx->pc == 0x3860DCu) {
        ctx->pc = 0x3860DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860D8u;
        // 0x3860dc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860E0u;
        goto label_3860e0;
    }
    ctx->pc = 0x3860D8u;
    {
        const bool branch_taken_0x3860d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3860DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860D8u;
        // 0x3860dc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860d8) {
            ctx->pc = 0x38611Cu;
            goto label_38611c;
        }
    }
    ctx->pc = 0x3860E0u;
label_3860e0:
    // 0x3860e0: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x3860e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_3860e4:
    // 0x3860e4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3860e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3860e8:
    // 0x3860e8: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x3860e8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3860ec:
    // 0x3860ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3860ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3860f0:
    // 0x3860f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3860f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3860f4:
    // 0x3860f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3860f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3860f8:
    // 0x3860f8: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x3860f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3860fc:
    // 0x3860fc: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x3860fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_386100:
    // 0x386100: 0xe0f809  jalr        $a3
label_386104:
    if (ctx->pc == 0x386104u) {
        ctx->pc = 0x386104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386100u;
        // 0x386104: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386108u;
        goto label_386108;
    }
    ctx->pc = 0x386100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x386108u);
        ctx->pc = 0x386104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386100u;
        // 0x386104: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386100u, 0x386108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386108u;
label_386108:
    // 0x386108: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x386108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_38610c:
    // 0x38610c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x38610cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_386110:
    // 0x386110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x386110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_386114:
    // 0x386114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x386114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386118:
    // 0x386118: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x386118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38611c:
    // 0x38611c: 0x3e00008  jr          $ra
label_386120:
    if (ctx->pc == 0x386120u) {
        ctx->pc = 0x386120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38611Cu;
        // 0x386120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386124u;
        goto label_386124;
    }
    ctx->pc = 0x38611Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38611Cu;
        // 0x386120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38611Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386124u;
label_386124:
    // 0x386124: 0x0  nop
    ctx->pc = 0x386124u;
    // NOP
    ctx->pc = 0x386128u;
}
