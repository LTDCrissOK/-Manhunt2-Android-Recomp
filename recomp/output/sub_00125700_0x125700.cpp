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

// Function: sub_00125700
// Address: 0x125700 - 0x125800
void sub_00125700_0x125700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125700_0x125700");
#endif

    switch (ctx->pc) {
        case 0x125768u: goto label_125768;
        case 0x1257b0u: goto label_1257b0;
        default: break;
    }

    ctx->pc = 0x125700u;

    // 0x125700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125704: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x125704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x125708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12570c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12570cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x125710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125714: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x125714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x125718: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12571c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125720: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x125724: 0x24a5fffa  addiu       $a1, $a1, -0x6
    ctx->pc = 0x125724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x125728: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x125728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12572c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x12572cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x125730: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125738: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12573c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x12573cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125740: 0x8c530108  lw          $s3, 0x108($v0)
    ctx->pc = 0x125740u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x125744: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x125744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125748: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x125748u;
    {
        const bool branch_taken_0x125748 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125748u;
        // 0x12574c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125748) {
            ctx->pc = 0x1257D8u;
            goto label_1257d8;
        }
    }
    ctx->pc = 0x125750u;
    // 0x125750: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x125750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125754: 0x16440006  bne         $s2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125754u;
    {
        const bool branch_taken_0x125754 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x125758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125754u;
        // 0x125758: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125754) {
            ctx->pc = 0x125770u;
            goto label_125770;
        }
    }
    ctx->pc = 0x12575Cu;
    // 0x12575c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125760: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x125760u;
    SET_GPR_U32(ctx, 31, 0x125768u);
    ctx->pc = 0x125764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125760u;
    // 0x125764: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AF8u, 0x125760u, 0x125768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125768u;
label_125768:
    // 0x125768: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x125768u;
    {
        const bool branch_taken_0x125768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125768u;
        // 0x12576c: 0xae600fe0  sw          $zero, 0xFE0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125768) {
            ctx->pc = 0x1257D8u;
            goto label_1257d8;
        }
    }
    ctx->pc = 0x125770u;
label_125770:
    // 0x125770: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x125770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x125774: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x125774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x125778: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x125778u;
    {
        const bool branch_taken_0x125778 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125778u;
        // 0x12577c: 0x90430448  lbu         $v1, 0x448($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125778) {
            ctx->pc = 0x125790u;
            goto label_125790;
        }
    }
    ctx->pc = 0x125780u;
    // 0x125780: 0x54640016  bnel        $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x125780u;
    {
        const bool branch_taken_0x125780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x125780) {
            ctx->pc = 0x125784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125780u;
            // 0x125784: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1257DCu;
            goto label_1257dc;
        }
    }
    ctx->pc = 0x125788u;
    // 0x125788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x125788u;
    {
        const bool branch_taken_0x125788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125788u;
        // 0x12578c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125788) {
            ctx->pc = 0x1257A8u;
            goto label_1257a8;
        }
    }
    ctx->pc = 0x125790u;
label_125790:
    // 0x125790: 0x38620008  xori        $v0, $v1, 0x8
    ctx->pc = 0x125790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x125794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125794u;
    {
        const bool branch_taken_0x125794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125794u;
        // 0x125798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125794) {
            ctx->pc = 0x1257A8u;
            goto label_1257a8;
        }
    }
    ctx->pc = 0x12579Cu;
    // 0x12579c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12579Cu;
    {
        const bool branch_taken_0x12579c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12579c) {
            ctx->pc = 0x1257A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12579Cu;
            // 0x1257a0: 0xae600fe0  sw          $zero, 0xFE0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4064), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1257A8u;
            goto label_1257a8;
        }
    }
    ctx->pc = 0x1257A4u;
    // 0x1257a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1257a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1257a8:
    // 0x1257a8: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x1257A8u;
    SET_GPR_U32(ctx, 31, 0x1257B0u);
    ctx->pc = 0x1257ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257A8u;
    // 0x1257ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AF8u, 0x1257A8u, 0x1257B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1257B0u;
label_1257b0:
    // 0x1257b0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1257b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1257b4: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x1257b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x1257b8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1257b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1257bc: 0x246356d8  addiu       $v1, $v1, 0x56D8
    ctx->pc = 0x1257bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22232));
    // 0x1257c0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1257c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1257c4: 0xa0940449  sb          $s4, 0x449($a0)
    ctx->pc = 0x1257c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1097), (uint8_t)GPR_U32(ctx, 20));
    // 0x1257c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1257c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257cc: 0xa0920448  sb          $s2, 0x448($a0)
    ctx->pc = 0x1257ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1096), (uint8_t)GPR_U32(ctx, 18));
    // 0x1257d0: 0xac55044c  sw          $s5, 0x44C($v0)
    ctx->pc = 0x1257d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1100), GPR_U32(ctx, 21));
    // 0x1257d4: 0xae630fe0  sw          $v1, 0xFE0($s3)
    ctx->pc = 0x1257d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4064), GPR_U32(ctx, 3));
label_1257d8:
    // 0x1257d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1257d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1257dc:
    // 0x1257dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1257dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1257e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1257e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1257e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1257e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1257e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1257e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1257ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1257ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1257f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1257f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1257f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1257F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1257F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257F4u;
        // 0x1257f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1257F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1257FCu;
    // 0x1257fc: 0x0  nop
    ctx->pc = 0x1257fcu;
    // NOP
    ctx->pc = 0x125800u;
}
