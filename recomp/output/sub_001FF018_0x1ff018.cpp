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

// Function: sub_001FF018
// Address: 0x1ff018 - 0x1ff110
void sub_001FF018_0x1ff018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF018_0x1ff018");
#endif

    switch (ctx->pc) {
        case 0x1ff0b8u: goto label_1ff0b8;
        case 0x1ff0c0u: goto label_1ff0c0;
        case 0x1ff0e0u: goto label_1ff0e0;
        default: break;
    }

    ctx->pc = 0x1ff018u;

    // 0x1ff018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff01c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ff01cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff020: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ff024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff028: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ff028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff02c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff030: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ff030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ff034: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF034u;
    {
        const bool branch_taken_0x1ff034 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF034u;
        // 0x1ff038: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff034) {
            ctx->pc = 0x1FF078u;
            goto label_1ff078;
        }
    }
    ctx->pc = 0x1FF03Cu;
    // 0x1ff03c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1ff03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ff040: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x1ff040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1ff044: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x1ff044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ff048: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1ff048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1ff04c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ff04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff050: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ff050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff054: 0x8d03005c  lw          $v1, 0x5C($t0)
    ctx->pc = 0x1ff054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x1ff058: 0xc48d00c0  lwc1        $f13, 0xC0($a0)
    ctx->pc = 0x1ff058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ff05c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1ff05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1ff060: 0xc4ac001c  lwc1        $f12, 0x1C($a1)
    ctx->pc = 0x1ff060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff064: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ff064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff068: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF068u;
    {
        const bool branch_taken_0x1ff068 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF068u;
        // 0x1ff06c: 0xc4d400d0  lwc1        $f20, 0xD0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff068) {
            ctx->pc = 0x1FF09Cu;
            goto label_1ff09c;
        }
    }
    ctx->pc = 0x1FF070u;
    // 0x1ff070: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FF070u;
    {
        const bool branch_taken_0x1ff070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF070u;
        // 0x1ff074: 0xc51400e0  lwc1        $f20, 0xE0($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff070) {
            ctx->pc = 0x1FF09Cu;
            goto label_1ff09c;
        }
    }
    ctx->pc = 0x1FF078u;
label_1ff078:
    // 0x1ff078: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1ff078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ff07c: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x1ff07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1ff080: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1ff080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ff084: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1ff084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1ff088: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ff088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff08c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ff08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff090: 0xc49400e0  lwc1        $f20, 0xE0($a0)
    ctx->pc = 0x1ff090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ff094: 0xc4cc001c  lwc1        $f12, 0x1C($a2)
    ctx->pc = 0x1ff094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff098: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ff098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ff09c:
    // 0x1ff09c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ff09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ff0a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff0a4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ff0a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ff0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff0ac: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1ff0acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1ff0b0: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x1FF0B0u;
    SET_GPR_U32(ctx, 31, 0x1FF0B8u);
    ctx->pc = 0x1FF0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF0B0u;
    // 0x1ff0b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FF0B0u, 0x1FF0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF0B8u;
label_1ff0b8:
    // 0x1ff0b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ff0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff0bc: 0x0  nop
    ctx->pc = 0x1ff0bcu;
    // NOP
label_1ff0c0:
    // 0x1ff0c0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ff0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ff0c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff0c8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ff0cc: 0x12120004  beq         $s0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF0CCu;
    {
        const bool branch_taken_0x1ff0cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0CCu;
        // 0x1ff0d0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0cc) {
            ctx->pc = 0x1FF0E0u;
            goto label_1ff0e0;
        }
    }
    ctx->pc = 0x1FF0D4u;
    // 0x1ff0d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ff0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ff0d8: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x1FF0D8u;
    SET_GPR_U32(ctx, 31, 0x1FF0E0u);
    ctx->pc = 0x1FF0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF0D8u;
    // 0x1ff0dc: 0xc48c001c  lwc1        $f12, 0x1C($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FF0D8u, 0x1FF0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF0E0u;
label_1ff0e0:
    // 0x1ff0e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ff0e4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1ff0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ff0e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FF0E8u;
    {
        const bool branch_taken_0x1ff0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0E8u;
        // 0x1ff0ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0e8) {
            ctx->pc = 0x1FF0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff0c0;
        }
    }
    ctx->pc = 0x1FF0F0u;
    // 0x1ff0f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff0f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff0f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff0f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ff0f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff0fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ff0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ff100: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ff100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ff104: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF104u;
        // 0x1ff108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF10Cu;
    // 0x1ff10c: 0x0  nop
    ctx->pc = 0x1ff10cu;
    // NOP
    ctx->pc = 0x1ff110u;
}
