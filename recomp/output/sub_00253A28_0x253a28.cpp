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

// Function: sub_00253A28
// Address: 0x253a28 - 0x253b08
void sub_00253A28_0x253a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253A28_0x253a28");
#endif

    switch (ctx->pc) {
        case 0x253a88u: goto label_253a88;
        case 0x253ac8u: goto label_253ac8;
        case 0x253ae0u: goto label_253ae0;
        case 0x253ae8u: goto label_253ae8;
        default: break;
    }

    ctx->pc = 0x253a28u;

    // 0x253a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253a2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x253a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x253a30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x253a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x253a34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x253a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x253a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x253a3c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x253a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x253a40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x253a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a44: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x253a48: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253A4Cu;
    {
        const bool branch_taken_0x253a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A4Cu;
        // 0x253a50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a4c) {
            ctx->pc = 0x253A5Cu;
            goto label_253a5c;
        }
    }
    ctx->pc = 0x253A54u;
    // 0x253a54: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x253A54u;
    {
        const bool branch_taken_0x253a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A54u;
        // 0x253a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a54) {
            ctx->pc = 0x253AECu;
            goto label_253aec;
        }
    }
    ctx->pc = 0x253A5Cu;
label_253a5c:
    // 0x253a5c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x253a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x253a60: 0x8e430fe8  lw          $v1, 0xFE8($s2)
    ctx->pc = 0x253a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x253a64: 0xae421060  sw          $v0, 0x1060($s2)
    ctx->pc = 0x253a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4192), GPR_U32(ctx, 2));
    // 0x253a68: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x253A68u;
    {
        const bool branch_taken_0x253a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A68u;
        // 0x253a6c: 0xac60035c  sw          $zero, 0x35C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a68) {
            ctx->pc = 0x253AD0u;
            goto label_253ad0;
        }
    }
    ctx->pc = 0x253A70u;
    // 0x253a70: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x253a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x253a74: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x253a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x253a78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x253a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x253a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a80: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x253A80u;
    SET_GPR_U32(ctx, 31, 0x253A88u);
    ctx->pc = 0x253A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A80u;
    // 0x253a84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x253A80u, 0x253A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A88u;
label_253a88:
    // 0x253a88: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x253A88u;
    {
        const bool branch_taken_0x253a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A88u;
        // 0x253a8c: 0x8e440fe4  lw          $a0, 0xFE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a88) {
            ctx->pc = 0x253AD4u;
            goto label_253ad4;
        }
    }
    ctx->pc = 0x253A90u;
    // 0x253a90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x253a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x253a94: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x253a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a98: 0xc442c6a4  lwc1        $f2, -0x395C($v0)
    ctx->pc = 0x253a98u;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253a9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253aa0: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x253aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x253aa4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x253aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253aa8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x253aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x253aac: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x253aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253ab0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x253ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253ab4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x253ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x253ab8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x253ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x253abc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x253abcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x253ac0: 0xc061e38  jal         func_1878E0
    ctx->pc = 0x253AC0u;
    SET_GPR_U32(ctx, 31, 0x253AC8u);
    ctx->pc = 0x253AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AC0u;
    // 0x253ac4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1878E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1878E0u, 0x253AC0u, 0x253AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AC8u;
label_253ac8:
    // 0x253ac8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x253AC8u;
    {
        const bool branch_taken_0x253ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253ac8) {
            ctx->pc = 0x253AE0u;
            goto label_253ae0;
        }
    }
    ctx->pc = 0x253AD0u;
label_253ad0:
    // 0x253ad0: 0x8e440fe4  lw          $a0, 0xFE4($s2)
    ctx->pc = 0x253ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4068)));
label_253ad4:
    // 0x253ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ad8: 0xc061e38  jal         func_1878E0
    ctx->pc = 0x253AD8u;
    SET_GPR_U32(ctx, 31, 0x253AE0u);
    ctx->pc = 0x253ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AD8u;
    // 0x253adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1878E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1878E0u, 0x253AD8u, 0x253AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AE0u;
label_253ae0:
    // 0x253ae0: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253AE0u;
    SET_GPR_U32(ctx, 31, 0x253AE8u);
    ctx->pc = 0x253AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AE0u;
    // 0x253ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253AE0u, 0x253AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AE8u;
label_253ae8:
    // 0x253ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253aec:
    // 0x253aec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x253aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253af0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x253af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253af4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x253af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253af8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x253af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253afc: 0x3e00008  jr          $ra
    ctx->pc = 0x253AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AFCu;
        // 0x253b00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253B04u;
    // 0x253b04: 0x0  nop
    ctx->pc = 0x253b04u;
    // NOP
    ctx->pc = 0x253b08u;
}
