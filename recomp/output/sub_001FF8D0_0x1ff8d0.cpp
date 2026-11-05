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

// Function: sub_001FF8D0
// Address: 0x1ff8d0 - 0x1ff9e0
void sub_001FF8D0_0x1ff8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF8D0_0x1ff8d0");
#endif

    switch (ctx->pc) {
        case 0x1ff908u: goto label_1ff908;
        case 0x1ff924u: goto label_1ff924;
        case 0x1ff930u: goto label_1ff930;
        case 0x1ff968u: goto label_1ff968;
        case 0x1ff988u: goto label_1ff988;
        default: break;
    }

    ctx->pc = 0x1ff8d0u;

    // 0x1ff8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff8d4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ff8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ff8d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1ff8d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ff8dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ff8dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1ff8e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff8e4: 0x460da032  c.eq.s      $f20, $f13
    ctx->pc = 0x1ff8e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff8e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff8ec: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF8ECu;
    {
        const bool branch_taken_0x1ff8ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8ECu;
        // 0x1ff8f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8ec) {
            ctx->pc = 0x1FF940u;
            goto label_1ff940;
        }
    }
    ctx->pc = 0x1FF8F4u;
    // 0x1ff8f4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1ff8f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1ff8f8: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ff8fc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1ff8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff900: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ff900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff904: 0x0  nop
    ctx->pc = 0x1ff904u;
    // NOP
label_1ff908:
    // 0x1ff908: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ff908u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ff90c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff910: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ff914: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ff914u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ff918: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1ff918u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1ff91c: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x1FF91Cu;
    SET_GPR_U32(ctx, 31, 0x1FF924u);
    ctx->pc = 0x1FF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF91Cu;
    // 0x1ff920: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FF91Cu, 0x1FF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF924u;
label_1ff924:
    // 0x1ff924: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ff924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff928: 0xc082482  jal         func_209208
    ctx->pc = 0x1FF928u;
    SET_GPR_U32(ctx, 31, 0x1FF930u);
    ctx->pc = 0x1FF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF928u;
    // 0x1ff92c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209208u, 0x1FF928u, 0x1FF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF930u;
label_1ff930:
    // 0x1ff930: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FF930u;
    {
        const bool branch_taken_0x1ff930 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1ff930) {
            ctx->pc = 0x1FF934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF930u;
            // 0x1ff934: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff908;
        }
    }
    ctx->pc = 0x1FF938u;
    // 0x1ff938: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1FF938u;
    {
        const bool branch_taken_0x1ff938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF938u;
        // 0x1ff93c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff938) {
            ctx->pc = 0x1FF9C8u;
            goto label_1ff9c8;
        }
    }
    ctx->pc = 0x1FF940u;
label_1ff940:
    // 0x1ff940: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ff940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ff944: 0x9062936c  lbu         $v0, -0x6C94($v1)
    ctx->pc = 0x1ff944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F936Cu));
    // 0x1ff948: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF948u;
    {
        const bool branch_taken_0x1ff948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff948) {
            ctx->pc = 0x1FF94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF948u;
            // 0x1ff94c: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF998u;
            goto label_1ff998;
        }
    }
    ctx->pc = 0x1FF950u;
    // 0x1ff950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff954: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x1ff954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ff958: 0xa062936c  sb          $v0, -0x6C94($v1)
    ctx->pc = 0x1ff958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939500), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ff95c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff960: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ff960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff964: 0x0  nop
    ctx->pc = 0x1ff964u;
    // NOP
label_1ff968:
    // 0x1ff968: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1ff968u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1ff96c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ff96cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ff970: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ff970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ff974: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff978: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ff97c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ff97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ff980: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x1FF980u;
    SET_GPR_U32(ctx, 31, 0x1FF988u);
    ctx->pc = 0x1FF984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF980u;
    // 0x1ff984: 0xc48c001c  lwc1        $f12, 0x1C($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FF980u, 0x1FF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF988u;
label_1ff988:
    // 0x1ff988: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FF988u;
    {
        const bool branch_taken_0x1ff988 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1ff988) {
            ctx->pc = 0x1FF98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF988u;
            // 0x1ff98c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff968;
        }
    }
    ctx->pc = 0x1FF990u;
    // 0x1ff990: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FF990u;
    {
        const bool branch_taken_0x1ff990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF990u;
        // 0x1ff994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff990) {
            ctx->pc = 0x1FF9C8u;
            goto label_1ff9c8;
        }
    }
    ctx->pc = 0x1FF998u;
label_1ff998:
    // 0x1ff998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff99c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ff99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff9a0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ff9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff9a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ff9a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff9a8: 0x0  nop
    ctx->pc = 0x1ff9a8u;
    // NOP
    // 0x1ff9ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF9ACu;
    {
        const bool branch_taken_0x1ff9ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9ACu;
        // 0x1ff9b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9ac) {
            ctx->pc = 0x1FF9B8u;
            goto label_1ff9b8;
        }
    }
    ctx->pc = 0x1FF9B4u;
    // 0x1ff9b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ff9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff9b8:
    // 0x1ff9b8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1ff9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff9bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FF9BCu;
    {
        const bool branch_taken_0x1ff9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9bc) {
            ctx->pc = 0x1FF9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF9BCu;
            // 0x1ff9c0: 0xa060936c  sb          $zero, -0x6C94($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4294939500), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF9C4u;
            goto label_1ff9c4;
        }
    }
    ctx->pc = 0x1FF9C4u;
label_1ff9c4:
    // 0x1ff9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff9c8:
    // 0x1ff9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff9d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ff9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ff9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9D4u;
        // 0x1ff9d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF9DCu;
    // 0x1ff9dc: 0x0  nop
    ctx->pc = 0x1ff9dcu;
    // NOP
    ctx->pc = 0x1ff9e0u;
}
