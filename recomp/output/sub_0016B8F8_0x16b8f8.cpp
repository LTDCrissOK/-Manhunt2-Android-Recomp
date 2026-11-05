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

// Function: sub_0016B8F8
// Address: 0x16b8f8 - 0x16ba20
void sub_0016B8F8_0x16b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B8F8_0x16b8f8");
#endif

    switch (ctx->pc) {
        case 0x16b970u: goto label_16b970;
        case 0x16b978u: goto label_16b978;
        case 0x16b9c4u: goto label_16b9c4;
        case 0x16b9d4u: goto label_16b9d4;
        case 0x16b9e0u: goto label_16b9e0;
        default: break;
    }

    ctx->pc = 0x16b8f8u;

    // 0x16b8f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16b8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b8fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x16b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x16b900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16b908: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x16b908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x16b90c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16b90cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b918: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16b91c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16b920: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16b920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16b924: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16b928: 0xc45489d0  lwc1        $f20, -0x7630($v0)
    ctx->pc = 0x16b928u;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b92c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x16b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x16b930: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B930u;
    {
        const bool branch_taken_0x16b930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B930u;
        // 0x16b934: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b930) {
            ctx->pc = 0x16B940u;
            goto label_16b940;
        }
    }
    ctx->pc = 0x16B938u;
    // 0x16b938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B938u;
    {
        const bool branch_taken_0x16b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B938u;
        // 0x16b93c: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b938) {
            ctx->pc = 0x16B948u;
            goto label_16b948;
        }
    }
    ctx->pc = 0x16B940u;
label_16b940:
    // 0x16b940: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x16b944: 0xc440a568  lwc1        $f0, -0x5A98($v0)
    ctx->pc = 0x16b944u;
    { uint32_t bits = FAST_READ32(0x43A568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16b948:
    // 0x16b948: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16b948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b94c: 0x0  nop
    ctx->pc = 0x16b94cu;
    // NOP
    // 0x16b950: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x16B950u;
    {
        const bool branch_taken_0x16b950 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B950u;
        // 0x16b954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b950) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B958u;
    // 0x16b958: 0x92740022  lbu         $s4, 0x22($s3)
    ctx->pc = 0x16b958u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x16b95c: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x16B95Cu;
    {
        const bool branch_taken_0x16b95c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B95Cu;
        // 0x16b960: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b95c) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B964u;
    // 0x16b964: 0x3c160044  lui         $s6, 0x44
    ctx->pc = 0x16b964u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)68 << 16));
    // 0x16b968: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x16b968u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b96c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16b970:
    // 0x16b970: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x16B970u;
    SET_GPR_U32(ctx, 31, 0x16B978u);
    ctx->pc = 0x16B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B970u;
    // 0x16b974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x16B970u, 0x16B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B978u;
label_16b978:
    // 0x16b978: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x16B978u;
    {
        const bool branch_taken_0x16b978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b978) {
            ctx->pc = 0x16B97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B978u;
            // 0x16b97c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B9E4u;
            goto label_16b9e4;
        }
    }
    ctx->pc = 0x16B980u;
    // 0x16b980: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16b980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b984: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16B984u;
    {
        const bool branch_taken_0x16b984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B984u;
        // 0x16b988: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b984) {
            ctx->pc = 0x16B9E4u;
            goto label_16b9e4;
        }
    }
    ctx->pc = 0x16B98Cu;
    // 0x16b98c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x16b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16b990: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B990u;
    {
        const bool branch_taken_0x16b990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B990u;
        // 0x16b994: 0xc6c0a568  lwc1        $f0, -0x5A98($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b990) {
            ctx->pc = 0x16B99Cu;
            goto label_16b99c;
        }
    }
    ctx->pc = 0x16B998u;
    // 0x16b998: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x16b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16b99c:
    // 0x16b99c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16b99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b9a0: 0x0  nop
    ctx->pc = 0x16b9a0u;
    // NOP
    // 0x16b9a4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x16B9A4u;
    {
        const bool branch_taken_0x16b9a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9A4u;
        // 0x16b9a8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9a4) {
            ctx->pc = 0x16B9E4u;
            goto label_16b9e4;
        }
    }
    ctx->pc = 0x16B9ACu;
    // 0x16b9ac: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x16b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x16b9b0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B9B0u;
    {
        const bool branch_taken_0x16b9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9b0) {
            ctx->pc = 0x16B9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B9B0u;
            // 0x16b9b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B9B8u;
    // 0x16b9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9bc: 0xc05adc6  jal         func_16B718
    ctx->pc = 0x16B9BCu;
    SET_GPR_U32(ctx, 31, 0x16B9C4u);
    ctx->pc = 0x16B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9BCu;
    // 0x16b9c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B718u, 0x16B9BCu, 0x16B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9C4u;
label_16b9c4:
    // 0x16b9c4: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B9C4u;
    {
        const bool branch_taken_0x16b9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x16B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9C4u;
        // 0x16b9c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9c4) {
            ctx->pc = 0x16B9E0u;
            goto label_16b9e0;
        }
    }
    ctx->pc = 0x16B9CCu;
    // 0x16b9cc: 0xc05adda  jal         func_16B768
    ctx->pc = 0x16B9CCu;
    SET_GPR_U32(ctx, 31, 0x16B9D4u);
    ctx->pc = 0x16B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9CCu;
    // 0x16b9d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B768u, 0x16B9CCu, 0x16B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9D4u;
label_16b9d4:
    // 0x16b9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9d8: 0xc05adfc  jal         func_16B7F0
    ctx->pc = 0x16B9D8u;
    SET_GPR_U32(ctx, 31, 0x16B9E0u);
    ctx->pc = 0x16B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9D8u;
    // 0x16b9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B7F0u, 0x16B9D8u, 0x16B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9E0u;
label_16b9e0:
    // 0x16b9e0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16b9e4:
    // 0x16b9e4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16b9e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16b9e8: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x16b9e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x16b9ec: 0x5460ffe0  bnel        $v1, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x16B9ECu;
    {
        const bool branch_taken_0x16b9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b9ec) {
            ctx->pc = 0x16B9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B9ECu;
            // 0x16b9f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b970;
        }
    }
    ctx->pc = 0x16B9F4u;
    // 0x16b9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b9f8:
    // 0x16b9f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b9fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16b9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ba00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16ba00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ba04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16ba04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ba08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16ba08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ba0c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16ba0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ba10: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16ba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ba14: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x16ba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ba18: 0x3e00008  jr          $ra
    ctx->pc = 0x16BA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA18u;
        // 0x16ba1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BA20u;
}
