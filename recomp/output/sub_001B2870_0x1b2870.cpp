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

// Function: sub_001B2870
// Address: 0x1b2870 - 0x1b2970
void sub_001B2870_0x1b2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2870_0x1b2870");
#endif

    switch (ctx->pc) {
        case 0x1b2890u: goto label_1b2890;
        case 0x1b28b8u: goto label_1b28b8;
        case 0x1b28ccu: goto label_1b28cc;
        case 0x1b2948u: goto label_1b2948;
        case 0x1b2958u: goto label_1b2958;
        default: break;
    }

    ctx->pc = 0x1b2870u;

    // 0x1b2870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b287c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b287cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2884: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1b2888: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B2888u;
    SET_GPR_U32(ctx, 31, 0x1B2890u);
    ctx->pc = 0x1B288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2888u;
    // 0x1b288c: 0x8c510110  lw          $s1, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B2888u, 0x1B2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2890u;
label_1b2890:
    // 0x1b2890: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1b2890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1b2894: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B2894u;
    {
        const bool branch_taken_0x1b2894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2894) {
            ctx->pc = 0x1B2898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2894u;
            // 0x1b2898: 0x8e030084  lw          $v1, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2904u;
            goto label_1b2904;
        }
    }
    ctx->pc = 0x1B289Cu;
    // 0x1b289c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1b289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b28a0: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1b28a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b28a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b28a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b28a8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B28A8u;
    {
        const bool branch_taken_0x1b28a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28a8) {
            ctx->pc = 0x1B28ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B28A8u;
            // 0x1b28ac: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B28D0u;
            goto label_1b28d0;
        }
    }
    ctx->pc = 0x1B28B0u;
    // 0x1b28b0: 0xc07577c  jal         func_1D5DF0
    ctx->pc = 0x1B28B0u;
    SET_GPR_U32(ctx, 31, 0x1B28B8u);
    ctx->pc = 0x1B28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B28B0u;
    // 0x1b28b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DF0u, 0x1B28B0u, 0x1B28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B28B8u;
label_1b28b8:
    // 0x1b28b8: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b28bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b28bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b28c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b28c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b28c4: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B28C4u;
    SET_GPR_U32(ctx, 31, 0x1B28CCu);
    ctx->pc = 0x1B28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B28C4u;
    // 0x1b28c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B28C4u, 0x1B28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B28CCu;
label_1b28cc:
    // 0x1b28cc: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1b28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1b28d0:
    // 0x1b28d0: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x1b28d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x1b28d4: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1b28d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b28d8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B28D8u;
    {
        const bool branch_taken_0x1b28d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28d8) {
            ctx->pc = 0x1B28DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B28D8u;
            // 0x1b28dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B28F0u;
            goto label_1b28f0;
        }
    }
    ctx->pc = 0x1B28E0u;
    // 0x1b28e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b28e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b28e4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B28E4u;
    {
        const bool branch_taken_0x1b28e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28e4) {
            ctx->pc = 0x1B28E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B28E4u;
            // 0x1b28e8: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B28F8u;
            goto label_1b28f8;
        }
    }
    ctx->pc = 0x1B28ECu;
    // 0x1b28ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b28f0:
    // 0x1b28f0: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1b28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1b28f4: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1b28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1b28f8:
    // 0x1b28f8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B28F8u;
    {
        const bool branch_taken_0x1b28f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b28f8) {
            ctx->pc = 0x1B28FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B28F8u;
            // 0x1b28fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B295Cu;
            goto label_1b295c;
        }
    }
    ctx->pc = 0x1B2900u;
    // 0x1b2900: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b2900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b2904:
    // 0x1b2904: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b2908: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B2908u;
    {
        const bool branch_taken_0x1b2908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2908) {
            ctx->pc = 0x1B290Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2908u;
            // 0x1b290c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B295Cu;
            goto label_1b295c;
        }
    }
    ctx->pc = 0x1B2910u;
    // 0x1b2910: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1b2910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b2914: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1b2914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b2918: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b2918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b291c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B291Cu;
    {
        const bool branch_taken_0x1b291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B291Cu;
        // 0x1b2920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b291c) {
            ctx->pc = 0x1B2950u;
            goto label_1b2950;
        }
    }
    ctx->pc = 0x1B2924u;
    // 0x1b2924: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x1b2924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b292c: 0x0  nop
    ctx->pc = 0x1b292cu;
    // NOP
    // 0x1b2930: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b2930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2934: 0x0  nop
    ctx->pc = 0x1b2934u;
    // NOP
    // 0x1b2938: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2938u;
    {
        const bool branch_taken_0x1b2938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2938u;
        // 0x1b293c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2938) {
            ctx->pc = 0x1B295Cu;
            goto label_1b295c;
        }
    }
    ctx->pc = 0x1B2940u;
    // 0x1b2940: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1B2940u;
    SET_GPR_U32(ctx, 31, 0x1B2948u);
    ctx->pc = 0x1B2944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2940u;
    // 0x1b2944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1B2940u, 0x1B2948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2948u;
label_1b2948:
    // 0x1b2948: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2948u;
    {
        const bool branch_taken_0x1b2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2948u;
        // 0x1b294c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2948) {
            ctx->pc = 0x1B295Cu;
            goto label_1b295c;
        }
    }
    ctx->pc = 0x1B2950u;
label_1b2950:
    // 0x1b2950: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1B2950u;
    SET_GPR_U32(ctx, 31, 0x1B2958u);
    ctx->pc = 0x1B2954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2950u;
    // 0x1b2954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1B2950u, 0x1B2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2958u;
label_1b2958:
    // 0x1b2958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b295c:
    // 0x1b295c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b295cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2964: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2964u;
        // 0x1b2968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B296Cu;
    // 0x1b296c: 0x0  nop
    ctx->pc = 0x1b296cu;
    // NOP
    ctx->pc = 0x1b2970u;
}
