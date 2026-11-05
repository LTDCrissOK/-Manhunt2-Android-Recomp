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

// Function: sub_001D66B0
// Address: 0x1d66b0 - 0x1d6788
void sub_001D66B0_0x1d66b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D66B0_0x1d66b0");
#endif

    switch (ctx->pc) {
        case 0x1d66e8u: goto label_1d66e8;
        case 0x1d6708u: goto label_1d6708;
        case 0x1d6730u: goto label_1d6730;
        case 0x1d6754u: goto label_1d6754;
        case 0x1d676cu: goto label_1d676c;
        case 0x1d6774u: goto label_1d6774;
        default: break;
    }

    ctx->pc = 0x1d66b0u;

    // 0x1d66b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d66b4: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d66b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d66b8: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x1d66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x1d66bc: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1d66bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1d66c0: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1d66c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1d66c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d66c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d66c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D66C8u;
    {
        const bool branch_taken_0x1d66c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66C8u;
        // 0x1d66cc: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66c8) {
            ctx->pc = 0x1D66F0u;
            goto label_1d66f0;
        }
    }
    ctx->pc = 0x1D66D0u;
    // 0x1d66d0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1d66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1d66d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d66d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d66d8: 0x8c46ef48  lw          $a2, -0x10B8($v0)
    ctx->pc = 0x1d66d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BEF48u));
    // 0x1d66dc: 0x24a5d608  addiu       $a1, $a1, -0x29F8
    ctx->pc = 0x1d66dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956552));
    // 0x1d66e0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1D66E0u;
    SET_GPR_U32(ctx, 31, 0x1D66E8u);
    ctx->pc = 0x1D66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66E0u;
    // 0x1d66e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D66E0u, 0x1D66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66E8u;
label_1d66e8:
    // 0x1d66e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D66E8u;
    {
        const bool branch_taken_0x1d66e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66E8u;
        // 0x1d66ec: 0x8e029e40  lw          $v0, -0x61C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66e8) {
            ctx->pc = 0x1D670Cu;
            goto label_1d670c;
        }
    }
    ctx->pc = 0x1D66F0u;
label_1d66f0:
    // 0x1d66f0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1d66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1d66f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d66f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d66f8: 0x8c46ee20  lw          $a2, -0x11E0($v0)
    ctx->pc = 0x1d66f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BEE20u));
    // 0x1d66fc: 0x24a5d610  addiu       $a1, $a1, -0x29F0
    ctx->pc = 0x1d66fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956560));
    // 0x1d6700: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1D6700u;
    SET_GPR_U32(ctx, 31, 0x1D6708u);
    ctx->pc = 0x1D6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6700u;
    // 0x1d6704: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D6700u, 0x1D6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6708u;
label_1d6708:
    // 0x1d6708: 0x8e029e40  lw          $v0, -0x61C0($s0)
    ctx->pc = 0x1d6708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942272)));
label_1d670c:
    // 0x1d670c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d670cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d6710: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6710u;
    {
        const bool branch_taken_0x1d6710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6710u;
        // 0x1d6714: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6710) {
            ctx->pc = 0x1D6738u;
            goto label_1d6738;
        }
    }
    ctx->pc = 0x1D6718u;
    // 0x1d6718: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1d6718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d671c: 0x8c46ef40  lw          $a2, -0x10C0($v0)
    ctx->pc = 0x1d671cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963008)));
    // 0x1d6720: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d6724: 0x24a5d608  addiu       $a1, $a1, -0x29F8
    ctx->pc = 0x1d6724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956552));
    // 0x1d6728: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1D6728u;
    SET_GPR_U32(ctx, 31, 0x1D6730u);
    ctx->pc = 0x1D672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6728u;
    // 0x1d672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D6728u, 0x1D6730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6730u;
label_1d6730:
    // 0x1d6730: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6730u;
    {
        const bool branch_taken_0x1d6730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6730u;
        // 0x1d6734: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6730) {
            ctx->pc = 0x1D6758u;
            goto label_1d6758;
        }
    }
    ctx->pc = 0x1D6738u;
label_1d6738:
    // 0x1d6738: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1d6738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1d673c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1d673cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d6740: 0x8c46ee20  lw          $a2, -0x11E0($v0)
    ctx->pc = 0x1d6740u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BEE20u));
    // 0x1d6744: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d6748: 0x24a5d630  addiu       $a1, $a1, -0x29D0
    ctx->pc = 0x1d6748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956592));
    // 0x1d674c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1D674Cu;
    SET_GPR_U32(ctx, 31, 0x1D6754u);
    ctx->pc = 0x1D6750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D674Cu;
    // 0x1d6750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D674Cu, 0x1D6754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6754u;
label_1d6754:
    // 0x1d6754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d6754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d6758:
    // 0x1d6758: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1d6758u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1d675c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d675cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6760: 0x2610ff68  addiu       $s0, $s0, -0x98
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967144));
    // 0x1d6764: 0xc0c3346  jal         func_30CD18
    ctx->pc = 0x1D6764u;
    SET_GPR_U32(ctx, 31, 0x1D676Cu);
    ctx->pc = 0x1D6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6764u;
    // 0x1d6768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CD18u, 0x1D6764u, 0x1D676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D676Cu;
label_1d676c:
    // 0x1d676c: 0xc0c3464  jal         func_30D190
    ctx->pc = 0x1D676Cu;
    SET_GPR_U32(ctx, 31, 0x1D6774u);
    ctx->pc = 0x1D6770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D676Cu;
    // 0x1d6770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D190u, 0x1D676Cu, 0x1D6774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6774u;
label_1d6774:
    // 0x1d6774: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1d6774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d6778: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1d6778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d677c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D677Cu;
        // 0x1d6780: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6784u;
    // 0x1d6784: 0x0  nop
    ctx->pc = 0x1d6784u;
    // NOP
    ctx->pc = 0x1d6788u;
}
