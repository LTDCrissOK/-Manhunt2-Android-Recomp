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

// Function: sub_002B2818
// Address: 0x2b2818 - 0x2b2a08
void sub_002B2818_0x2b2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2818_0x2b2818");
#endif

    switch (ctx->pc) {
        case 0x2b285cu: goto label_2b285c;
        case 0x2b28b8u: goto label_2b28b8;
        case 0x2b291cu: goto label_2b291c;
        case 0x2b292cu: goto label_2b292c;
        case 0x2b2970u: goto label_2b2970;
        case 0x2b2980u: goto label_2b2980;
        case 0x2b29c4u: goto label_2b29c4;
        case 0x2b29d4u: goto label_2b29d4;
        default: break;
    }

    ctx->pc = 0x2b2818u;

    // 0x2b2818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b281c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b282c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b2830: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b2830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b2834: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b2834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2838: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B2838u;
    {
        const bool branch_taken_0x2b2838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2838) {
            ctx->pc = 0x2B283Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2838u;
            // 0x2b283c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2894u;
            goto label_2b2894;
        }
    }
    ctx->pc = 0x2B2840u;
    // 0x2b2840: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b2840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2844: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2848: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B2848u;
    {
        const bool branch_taken_0x2b2848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2848) {
            ctx->pc = 0x2B284Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2848u;
            // 0x2b284c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2890u;
            goto label_2b2890;
        }
    }
    ctx->pc = 0x2B2850u;
    // 0x2b2850: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b2850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2854: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2854u;
    SET_GPR_U32(ctx, 31, 0x2B285Cu);
    ctx->pc = 0x2B2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2854u;
    // 0x2b2858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2854u, 0x2B285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B285Cu;
label_2b285c:
    // 0x2b285c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2b2860: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B2860u;
    {
        const bool branch_taken_0x2b2860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2860) {
            ctx->pc = 0x2B2864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2860u;
            // 0x2b2864: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2890u;
            goto label_2b2890;
        }
    }
    ctx->pc = 0x2B2868u;
    // 0x2b2868: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b286c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B286Cu;
    {
        const bool branch_taken_0x2b286c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B286Cu;
        // 0x2b2870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b286c) {
            ctx->pc = 0x2B2884u;
            goto label_2b2884;
        }
    }
    ctx->pc = 0x2B2874u;
    // 0x2b2874: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b2874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b2878: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2878u;
    {
        const bool branch_taken_0x2b2878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2878u;
        // 0x2b287c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2878) {
            ctx->pc = 0x2B2884u;
            goto label_2b2884;
        }
    }
    ctx->pc = 0x2B2880u;
    // 0x2b2880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2884:
    // 0x2b2884: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2B2884u;
    {
        const bool branch_taken_0x2b2884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2884u;
        // 0x2b2888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2884) {
            ctx->pc = 0x2B29ECu;
            goto label_2b29ec;
        }
    }
    ctx->pc = 0x2B288Cu;
    // 0x2b288c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b2890:
    // 0x2b2890: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2b2890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2b2894:
    // 0x2b2894: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B2894u;
    {
        const bool branch_taken_0x2b2894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2894) {
            ctx->pc = 0x2B2898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2894u;
            // 0x2b2898: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B28F0u;
            goto label_2b28f0;
        }
    }
    ctx->pc = 0x2B289Cu;
    // 0x2b289c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b28a0: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b28a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b28a4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B28A4u;
    {
        const bool branch_taken_0x2b28a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b28a4) {
            ctx->pc = 0x2B28A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B28A4u;
            // 0x2b28a8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B28F0u;
            goto label_2b28f0;
        }
    }
    ctx->pc = 0x2B28ACu;
    // 0x2b28ac: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b28acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b28b0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B28B0u;
    SET_GPR_U32(ctx, 31, 0x2B28B8u);
    ctx->pc = 0x2B28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B28B0u;
    // 0x2b28b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B28B0u, 0x2B28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28B8u;
label_2b28b8:
    // 0x2b28b8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b28b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2b28bc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B28BCu;
    {
        const bool branch_taken_0x2b28bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b28bc) {
            ctx->pc = 0x2B28C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B28BCu;
            // 0x2b28c0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B28F0u;
            goto label_2b28f0;
        }
    }
    ctx->pc = 0x2B28C4u;
    // 0x2b28c4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b28c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B28C8u;
    {
        const bool branch_taken_0x2b28c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28C8u;
        // 0x2b28cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28c8) {
            ctx->pc = 0x2B28E0u;
            goto label_2b28e0;
        }
    }
    ctx->pc = 0x2B28D0u;
    // 0x2b28d0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b28d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B28D4u;
    {
        const bool branch_taken_0x2b28d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28D4u;
        // 0x2b28d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28d4) {
            ctx->pc = 0x2B28E0u;
            goto label_2b28e0;
        }
    }
    ctx->pc = 0x2B28DCu;
    // 0x2b28dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b28e0:
    // 0x2b28e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B28E0u;
    {
        const bool branch_taken_0x2b28e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b28e0) {
            ctx->pc = 0x2B28E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B28E0u;
            // 0x2b28e4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B28F0u;
            goto label_2b28f0;
        }
    }
    ctx->pc = 0x2B28E8u;
    // 0x2b28e8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2B28E8u;
    {
        const bool branch_taken_0x2b28e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28E8u;
        // 0x2b28ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28e8) {
            ctx->pc = 0x2B29ECu;
            goto label_2b29ec;
        }
    }
    ctx->pc = 0x2B28F0u;
label_2b28f0:
    // 0x2b28f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b28f4: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B28F4u;
    {
        const bool branch_taken_0x2b28f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b28f4) {
            ctx->pc = 0x2B28F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B28F4u;
            // 0x2b28f8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2944u;
            goto label_2b2944;
        }
    }
    ctx->pc = 0x2B28FCu;
    // 0x2b28fc: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2900: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2904: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2B2904u;
    {
        const bool branch_taken_0x2b2904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2904) {
            ctx->pc = 0x2B2908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2904u;
            // 0x2b2908: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2944u;
            goto label_2b2944;
        }
    }
    ctx->pc = 0x2B290Cu;
    // 0x2b290c: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b290cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2910: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b2910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2914: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2914u;
    SET_GPR_U32(ctx, 31, 0x2B291Cu);
    ctx->pc = 0x2B2918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2914u;
    // 0x2b2918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2914u, 0x2B291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B291Cu;
label_2b291c:
    // 0x2b291c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B291Cu;
    {
        const bool branch_taken_0x2b291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b291c) {
            ctx->pc = 0x2B2920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B291Cu;
            // 0x2b2920: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2938u;
            goto label_2b2938;
        }
    }
    ctx->pc = 0x2B2924u;
    // 0x2b2924: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2924u;
    SET_GPR_U32(ctx, 31, 0x2B292Cu);
    ctx->pc = 0x2B2928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2924u;
    // 0x2b2928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2924u, 0x2B292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B292Cu;
label_2b292c:
    // 0x2b292c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b292cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2930: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2930u;
    {
        const bool branch_taken_0x2b2930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2930) {
            ctx->pc = 0x2B2934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2930u;
            // 0x2b2934: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2938u;
            goto label_2b2938;
        }
    }
    ctx->pc = 0x2B2938u;
label_2b2938:
    // 0x2b2938: 0x1640002c  bnez        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B2938u;
    {
        const bool branch_taken_0x2b2938 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2938u;
        // 0x2b293c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2938) {
            ctx->pc = 0x2B29ECu;
            goto label_2b29ec;
        }
    }
    ctx->pc = 0x2B2940u;
    // 0x2b2940: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b2940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b2944:
    // 0x2b2944: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2b2944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b2948: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B2948u;
    {
        const bool branch_taken_0x2b2948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2948) {
            ctx->pc = 0x2B294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2948u;
            // 0x2b294c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2998u;
            goto label_2b2998;
        }
    }
    ctx->pc = 0x2B2950u;
    // 0x2b2950: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b2954: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2958: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2B2958u;
    {
        const bool branch_taken_0x2b2958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2958) {
            ctx->pc = 0x2B295Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2958u;
            // 0x2b295c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2998u;
            goto label_2b2998;
        }
    }
    ctx->pc = 0x2B2960u;
    // 0x2b2960: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b2960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b2964: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b2964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2968: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2968u;
    SET_GPR_U32(ctx, 31, 0x2B2970u);
    ctx->pc = 0x2B296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2968u;
    // 0x2b296c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2968u, 0x2B2970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2970u;
label_2b2970:
    // 0x2b2970: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2970u;
    {
        const bool branch_taken_0x2b2970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2970) {
            ctx->pc = 0x2B2974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2970u;
            // 0x2b2974: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B298Cu;
            goto label_2b298c;
        }
    }
    ctx->pc = 0x2B2978u;
    // 0x2b2978: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B2978u;
    SET_GPR_U32(ctx, 31, 0x2B2980u);
    ctx->pc = 0x2B297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2978u;
    // 0x2b297c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B2978u, 0x2B2980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2980u;
label_2b2980:
    // 0x2b2980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2984: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2984u;
    {
        const bool branch_taken_0x2b2984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2984) {
            ctx->pc = 0x2B2988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2984u;
            // 0x2b2988: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B298Cu;
            goto label_2b298c;
        }
    }
    ctx->pc = 0x2B298Cu;
label_2b298c:
    // 0x2b298c: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B298Cu;
    {
        const bool branch_taken_0x2b298c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B298Cu;
        // 0x2b2990: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b298c) {
            ctx->pc = 0x2B29ECu;
            goto label_2b29ec;
        }
    }
    ctx->pc = 0x2B2994u;
    // 0x2b2994: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b2994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b2998:
    // 0x2b2998: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b2998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b299c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B299Cu;
    {
        const bool branch_taken_0x2b299c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B299Cu;
        // 0x2b29a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b299c) {
            ctx->pc = 0x2B29ECu;
            goto label_2b29ec;
        }
    }
    ctx->pc = 0x2B29A4u;
    // 0x2b29a4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b29a8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b29a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b29ac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B29ACu;
    {
        const bool branch_taken_0x2b29ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29ACu;
        // 0x2b29b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29ac) {
            ctx->pc = 0x2B29ECu;
            goto label_2b29ec;
        }
    }
    ctx->pc = 0x2B29B4u;
    // 0x2b29b4: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2b29b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b29b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b29b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b29bc: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B29BCu;
    SET_GPR_U32(ctx, 31, 0x2B29C4u);
    ctx->pc = 0x2B29C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B29BCu;
    // 0x2b29c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B29BCu, 0x2B29C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29C4u;
label_2b29c4:
    // 0x2b29c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B29C4u;
    {
        const bool branch_taken_0x2b29c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b29c4) {
            ctx->pc = 0x2B29C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B29C4u;
            // 0x2b29c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B29E0u;
            goto label_2b29e0;
        }
    }
    ctx->pc = 0x2B29CCu;
    // 0x2b29cc: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B29CCu;
    SET_GPR_U32(ctx, 31, 0x2B29D4u);
    ctx->pc = 0x2B29D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B29CCu;
    // 0x2b29d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B29CCu, 0x2B29D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29D4u;
label_2b29d4:
    // 0x2b29d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b29d8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B29D8u;
    {
        const bool branch_taken_0x2b29d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b29d8) {
            ctx->pc = 0x2B29DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B29D8u;
            // 0x2b29dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B29E0u;
            goto label_2b29e0;
        }
    }
    ctx->pc = 0x2B29E0u;
label_2b29e0:
    // 0x2b29e0: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B29E0u;
    {
        const bool branch_taken_0x2b29e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29E0u;
        // 0x2b29e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29e0) {
            ctx->pc = 0x2B29ECu;
            goto label_2b29ec;
        }
    }
    ctx->pc = 0x2B29E8u;
    // 0x2b29e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b29e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b29ec:
    // 0x2b29ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b29ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b29f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b29f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b29f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b29f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b29f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b29f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b29fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B29FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29FCu;
        // 0x2b2a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B29FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A04u;
    // 0x2b2a04: 0x0  nop
    ctx->pc = 0x2b2a04u;
    // NOP
    ctx->pc = 0x2b2a08u;
}
