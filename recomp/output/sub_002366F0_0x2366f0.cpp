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

// Function: sub_002366F0
// Address: 0x2366f0 - 0x236810
void sub_002366F0_0x2366f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002366F0_0x2366f0");
#endif

    ctx->pc = 0x2366f0u;

    // 0x2366f0: 0x8c830338  lw          $v1, 0x338($a0)
    ctx->pc = 0x2366f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
    // 0x2366f4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2366f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2366f8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2366f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2366fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2366FCu;
    {
        const bool branch_taken_0x2366fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366FCu;
        // 0x236700: 0x8c650088  lw          $a1, 0x88($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366fc) {
            ctx->pc = 0x236728u;
            goto label_236728;
        }
    }
    ctx->pc = 0x236704u;
    // 0x236704: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x236704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x236708: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x23670c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23670Cu;
    {
        const bool branch_taken_0x23670c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23670Cu;
        // 0x236710: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23670c) {
            ctx->pc = 0x236720u;
            goto label_236720;
        }
    }
    ctx->pc = 0x236714u;
    // 0x236714: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x236714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948897)));
    // 0x236718: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x236718u;
    {
        const bool branch_taken_0x236718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236718) {
            ctx->pc = 0x236728u;
            goto label_236728;
        }
    }
    ctx->pc = 0x236720u;
label_236720:
    // 0x236720: 0x3e00008  jr          $ra
    ctx->pc = 0x236720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236720u;
        // 0x236724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236728u;
label_236728:
    // 0x236728: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x236728u;
    {
        const bool branch_taken_0x236728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236728u;
        // 0x23672c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236728) {
            ctx->pc = 0x236778u;
            goto label_236778;
        }
    }
    ctx->pc = 0x236730u;
    // 0x236730: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x236730u;
    {
        const bool branch_taken_0x236730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x236734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236730u;
        // 0x236734: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236730) {
            ctx->pc = 0x236778u;
            goto label_236778;
        }
    }
    ctx->pc = 0x236738u;
    // 0x236738: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x236738u;
    {
        const bool branch_taken_0x236738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236738u;
        // 0x23673c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236738) {
            ctx->pc = 0x236778u;
            goto label_236778;
        }
    }
    ctx->pc = 0x236740u;
    // 0x236740: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x236740u;
    {
        const bool branch_taken_0x236740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x236744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236740u;
        // 0x236744: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236740) {
            ctx->pc = 0x236778u;
            goto label_236778;
        }
    }
    ctx->pc = 0x236748u;
    // 0x236748: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236748u;
    {
        const bool branch_taken_0x236748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236748u;
        // 0x23674c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236748) {
            ctx->pc = 0x236778u;
            goto label_236778;
        }
    }
    ctx->pc = 0x236750u;
    // 0x236750: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236750u;
    {
        const bool branch_taken_0x236750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x236754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236750u;
        // 0x236754: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236750) {
            ctx->pc = 0x236778u;
            goto label_236778;
        }
    }
    ctx->pc = 0x236758u;
    // 0x236758: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236758u;
    {
        const bool branch_taken_0x236758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x236758) {
            ctx->pc = 0x23675Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236758u;
            // 0x23675c: 0x8c820418  lw          $v0, 0x418($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23677Cu;
            goto label_23677c;
        }
    }
    ctx->pc = 0x236760u;
    // 0x236760: 0x8c830338  lw          $v1, 0x338($a0)
    ctx->pc = 0x236760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
    // 0x236764: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x236764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x236768: 0x2442ffe5  addiu       $v0, $v0, -0x1B
    ctx->pc = 0x236768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967269));
    // 0x23676c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x23676cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x236770: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x236770u;
    {
        const bool branch_taken_0x236770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236770u;
        // 0x236774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236770) {
            ctx->pc = 0x236804u;
            goto label_236804;
        }
    }
    ctx->pc = 0x236778u;
label_236778:
    // 0x236778: 0x8c820418  lw          $v0, 0x418($a0)
    ctx->pc = 0x236778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
label_23677c:
    // 0x23677c: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x23677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x236780: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x236780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x236784: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x236784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236788: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x236788u;
    {
        const bool branch_taken_0x236788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236788u;
        // 0x23678c: 0x8c640150  lw          $a0, 0x150($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236788) {
            ctx->pc = 0x236800u;
            goto label_236800;
        }
    }
    ctx->pc = 0x236790u;
    // 0x236790: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x236790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x236794: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x236794u;
    {
        const bool branch_taken_0x236794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x236798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236794u;
        // 0x236798: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236794) {
            ctx->pc = 0x236800u;
            goto label_236800;
        }
    }
    ctx->pc = 0x23679Cu;
    // 0x23679c: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23679Cu;
    {
        const bool branch_taken_0x23679c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2367A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23679Cu;
        // 0x2367a0: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23679c) {
            ctx->pc = 0x236800u;
            goto label_236800;
        }
    }
    ctx->pc = 0x2367A4u;
    // 0x2367a4: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2367A4u;
    {
        const bool branch_taken_0x2367a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2367A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367A4u;
        // 0x2367a8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367a4) {
            ctx->pc = 0x236800u;
            goto label_236800;
        }
    }
    ctx->pc = 0x2367ACu;
    // 0x2367ac: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2367ACu;
    {
        const bool branch_taken_0x2367ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367ACu;
        // 0x2367b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367ac) {
            ctx->pc = 0x2367C0u;
            goto label_2367c0;
        }
    }
    ctx->pc = 0x2367B4u;
    // 0x2367b4: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2367b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2367b8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2367B8u;
    {
        const bool branch_taken_0x2367b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2367b8) {
            ctx->pc = 0x2367C4u;
            goto label_2367c4;
        }
    }
    ctx->pc = 0x2367C0u;
label_2367c0:
    // 0x2367c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2367c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2367c4:
    // 0x2367c4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2367C4u;
    {
        const bool branch_taken_0x2367c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2367C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367C4u;
        // 0x2367c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367c4) {
            ctx->pc = 0x236804u;
            goto label_236804;
        }
    }
    ctx->pc = 0x2367CCu;
    // 0x2367cc: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2367ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x2367d0: 0x2462ffdd  addiu       $v0, $v1, -0x23
    ctx->pc = 0x2367d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
    // 0x2367d4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2367d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2367d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2367D8u;
    {
        const bool branch_taken_0x2367d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2367DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D8u;
        // 0x2367dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367d8) {
            ctx->pc = 0x236804u;
            goto label_236804;
        }
    }
    ctx->pc = 0x2367E0u;
    // 0x2367e0: 0x2462ffea  addiu       $v0, $v1, -0x16
    ctx->pc = 0x2367e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967274));
    // 0x2367e4: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2367e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2367e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2367E8u;
    {
        const bool branch_taken_0x2367e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2367ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367E8u;
        // 0x2367ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367e8) {
            ctx->pc = 0x236804u;
            goto label_236804;
        }
    }
    ctx->pc = 0x2367F0u;
    // 0x2367f0: 0x2463ffd9  addiu       $v1, $v1, -0x27
    ctx->pc = 0x2367f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
    // 0x2367f4: 0x2c630009  sltiu       $v1, $v1, 0x9
    ctx->pc = 0x2367f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2367f8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2367F8u;
    {
        const bool branch_taken_0x2367f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367F8u;
        // 0x2367fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367f8) {
            ctx->pc = 0x236804u;
            goto label_236804;
        }
    }
    ctx->pc = 0x236800u;
label_236800:
    // 0x236800: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236804:
    // 0x236804: 0x3e00008  jr          $ra
    ctx->pc = 0x236804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23680Cu;
    // 0x23680c: 0x0  nop
    ctx->pc = 0x23680cu;
    // NOP
    ctx->pc = 0x236810u;
}
