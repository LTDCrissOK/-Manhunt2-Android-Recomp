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

// Function: sub_003B1698
// Address: 0x3b1698 - 0x3b1738
void sub_003B1698_0x3b1698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1698_0x3b1698");
#endif

    switch (ctx->pc) {
        case 0x3b16c8u: goto label_3b16c8;
        default: break;
    }

    ctx->pc = 0x3b1698u;

    // 0x3b1698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b169c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b16a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b16a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b16a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b16a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b16a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b16a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b16ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b16acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b16b0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x3b16b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3b16b4: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x3b16b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3b16b8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3B16B8u;
    {
        const bool branch_taken_0x3b16b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b16b8) {
            ctx->pc = 0x3B16BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B16B8u;
            // 0x3b16bc: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B16F4u;
            goto label_3b16f4;
        }
    }
    ctx->pc = 0x3B16C0u;
    // 0x3b16c0: 0xc0ec502  jal         func_3B1408
    ctx->pc = 0x3B16C0u;
    SET_GPR_U32(ctx, 31, 0x3B16C8u);
    ctx->pc = 0x3B1408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1408u, 0x3B16C0u, 0x3B16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B16C8u;
label_3b16c8:
    // 0x3b16c8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x3b16c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3b16cc: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x3b16ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3b16d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B16D0u;
    {
        const bool branch_taken_0x3b16d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16D0u;
        // 0x3b16d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b16d0) {
            ctx->pc = 0x3B16F0u;
            goto label_3b16f0;
        }
    }
    ctx->pc = 0x3B16D8u;
    // 0x3b16d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3b16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3b16dc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3b16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3b16e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3b16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b16e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B16E4u;
    {
        const bool branch_taken_0x3b16e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16E4u;
        // 0x3b16e8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b16e4) {
            ctx->pc = 0x3B1720u;
            goto label_3b1720;
        }
    }
    ctx->pc = 0x3B16ECu;
    // 0x3b16ec: 0x0  nop
    ctx->pc = 0x3b16ecu;
    // NOP
label_3b16f0:
    // 0x3b16f0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3b16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b16f4:
    // 0x3b16f4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x3b16f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3b16f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3b16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b16fc: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x3b16fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x3b1700: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b1700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b1704: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b1704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b1708: 0x8c84feb8  lw          $a0, -0x148($a0)
    ctx->pc = 0x3b1708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966968)));
    // 0x3b170c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3b170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3b1710: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3b1710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b1714: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3b1714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3b1718: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x3b1718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x3b171c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3b171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3b1720:
    // 0x3b1720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b172c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B172Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B172Cu;
        // 0x3b1730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B172Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1734u;
    // 0x3b1734: 0x0  nop
    ctx->pc = 0x3b1734u;
    // NOP
    ctx->pc = 0x3b1738u;
}
