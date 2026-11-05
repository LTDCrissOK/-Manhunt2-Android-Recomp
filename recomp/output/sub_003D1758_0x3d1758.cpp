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

// Function: sub_003D1758
// Address: 0x3d1758 - 0x3d1820
void sub_003D1758_0x3d1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1758_0x3d1758");
#endif

    switch (ctx->pc) {
        case 0x3d1788u: goto label_3d1788;
        case 0x3d17a0u: goto label_3d17a0;
        case 0x3d17a8u: goto label_3d17a8;
        case 0x3d17b0u: goto label_3d17b0;
        case 0x3d17bcu: goto label_3d17bc;
        case 0x3d17c8u: goto label_3d17c8;
        case 0x3d17d0u: goto label_3d17d0;
        case 0x3d17d8u: goto label_3d17d8;
        case 0x3d17e8u: goto label_3d17e8;
        case 0x3d17fcu: goto label_3d17fc;
        default: break;
    }

    ctx->pc = 0x3d1758u;

    // 0x3d1758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d1758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d175c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3d1760: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d1764: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d1764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d1768: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3d1768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d176c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d1770: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d1774: 0x2450e9e8  addiu       $s0, $v0, -0x1618
    ctx->pc = 0x3d1774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961640));
    // 0x3d1778: 0x8c44e9e8  lw          $a0, -0x1618($v0)
    ctx->pc = 0x3d1778u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42E9E8u));
    // 0x3d177c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x3d177cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3d1780: 0xc0f45d2  jal         func_3D1748
    ctx->pc = 0x3D1780u;
    SET_GPR_U32(ctx, 31, 0x3D1788u);
    ctx->pc = 0x3D1784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1780u;
    // 0x3d1784: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1748u, 0x3D1780u, 0x3D1788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1788u;
label_3d1788:
    // 0x3d1788: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3d1788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3d178c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x3d178cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x3d1790: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x3d1790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x3d1794: 0x24a5e668  addiu       $a1, $a1, -0x1998
    ctx->pc = 0x3d1794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960744));
    // 0x3d1798: 0xc0f45bc  jal         func_3D16F0
    ctx->pc = 0x3D1798u;
    SET_GPR_U32(ctx, 31, 0x3D17A0u);
    ctx->pc = 0x3D179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1798u;
    // 0x3d179c: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D16F0u, 0x3D1798u, 0x3D17A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17A0u;
label_3d17a0:
    // 0x3d17a0: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x3D17A0u;
    SET_GPR_U32(ctx, 31, 0x3D17A8u);
    ctx->pc = 0x3D17A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D17A0u;
    // 0x3d17a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x3D17A0u, 0x3D17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17A8u;
label_3d17a8:
    // 0x3d17a8: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x3D17A8u;
    SET_GPR_U32(ctx, 31, 0x3D17B0u);
    ctx->pc = 0x3D17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D17A8u;
    // 0x3d17ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x3D17A8u, 0x3D17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17B0u;
label_3d17b0:
    // 0x3d17b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d17b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d17b4: 0xc0f45d2  jal         func_3D1748
    ctx->pc = 0x3D17B4u;
    SET_GPR_U32(ctx, 31, 0x3D17BCu);
    ctx->pc = 0x3D17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D17B4u;
    // 0x3d17b8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1748u, 0x3D17B4u, 0x3D17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17BCu;
label_3d17bc:
    // 0x3d17bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3d17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d17c0: 0xc0f45d2  jal         func_3D1748
    ctx->pc = 0x3D17C0u;
    SET_GPR_U32(ctx, 31, 0x3D17C8u);
    ctx->pc = 0x3D17C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D17C0u;
    // 0x3d17c4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1748u, 0x3D17C0u, 0x3D17C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17C8u;
label_3d17c8:
    // 0x3d17c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d17cc: 0x0  nop
    ctx->pc = 0x3d17ccu;
    // NOP
label_3d17d0:
    // 0x3d17d0: 0xc0f45ce  jal         func_3D1738
    ctx->pc = 0x3D17D0u;
    SET_GPR_U32(ctx, 31, 0x3D17D8u);
    ctx->pc = 0x3D17D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D17D0u;
    // 0x3d17d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1738u, 0x3D17D0u, 0x3D17D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17D8u;
label_3d17d8:
    // 0x3d17d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d17d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d17dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d17dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d17e0: 0xc0f45d2  jal         func_3D1748
    ctx->pc = 0x3D17E0u;
    SET_GPR_U32(ctx, 31, 0x3D17E8u);
    ctx->pc = 0x3D17E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D17E0u;
    // 0x3d17e4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1748u, 0x3D17E0u, 0x3D17E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17E8u;
label_3d17e8:
    // 0x3d17e8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x3d17e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3d17ec: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3D17ECu;
    {
        const bool branch_taken_0x3d17ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d17ec) {
            ctx->pc = 0x3D17F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D17ECu;
            // 0x3d17f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D17D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d17d0;
        }
    }
    ctx->pc = 0x3D17F4u;
    // 0x3d17f4: 0xc0f45ce  jal         func_3D1738
    ctx->pc = 0x3D17F4u;
    SET_GPR_U32(ctx, 31, 0x3D17FCu);
    ctx->pc = 0x3D17F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D17F4u;
    // 0x3d17f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1738u, 0x3D17F4u, 0x3D17FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D17FCu;
label_3d17fc:
    // 0x3d17fc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d17fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3d1800: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d1800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d1804: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d1804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d1808: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d1808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d180c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d180cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1810: 0xac62e9e0  sw          $v0, -0x1620($v1)
    ctx->pc = 0x3d1810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42E9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42E9E0u, _value); } while (0);
    // 0x3d1814: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1814u;
        // 0x3d1818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D181Cu;
    // 0x3d181c: 0x0  nop
    ctx->pc = 0x3d181cu;
    // NOP
    ctx->pc = 0x3d1820u;
}
