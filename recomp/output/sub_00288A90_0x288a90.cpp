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

// Function: sub_00288A90
// Address: 0x288a90 - 0x288b50
void sub_00288A90_0x288a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288A90_0x288a90");
#endif

    switch (ctx->pc) {
        case 0x288ad8u: goto label_288ad8;
        case 0x288afcu: goto label_288afc;
        case 0x288b28u: goto label_288b28;
        default: break;
    }

    ctx->pc = 0x288a90u;

    // 0x288a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288a94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x288a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x288a98: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x288a98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x288a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288aa0: 0x8e22a500  lw          $v0, -0x5B00($s1)
    ctx->pc = 0x288aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA500u));
    // 0x288aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x288aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x288aa8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x288aa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x288aac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x288AACu;
    {
        const bool branch_taken_0x288aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AACu;
        // 0x288ab0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288aac) {
            ctx->pc = 0x288B2Cu;
            goto label_288b2c;
        }
    }
    ctx->pc = 0x288AB4u;
    // 0x288ab4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x288ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x288ab8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x288ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x288abc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x288abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x288ac0: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x288ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x288ac4: 0x2610c830  addiu       $s0, $s0, -0x37D0
    ctx->pc = 0x288ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953008));
    // 0x288ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x288ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288acc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x288accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x288ad0: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x288AD0u;
    SET_GPR_U32(ctx, 31, 0x288AD8u);
    ctx->pc = 0x288AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AD0u;
    // 0x288ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x288AD0u, 0x288AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AD8u;
label_288ad8:
    // 0x288ad8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x288ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x288adc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x288adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288ae0: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x288ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x288ae4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x288ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x288ae8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x288ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x288aec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x288aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x288af0: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x288af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x288af4: 0xc0a2260  jal         func_288980
    ctx->pc = 0x288AF4u;
    SET_GPR_U32(ctx, 31, 0x288AFCu);
    ctx->pc = 0x288AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AF4u;
    // 0x288af8: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288980u, 0x288AF4u, 0x288AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AFCu;
label_288afc:
    // 0x288afc: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x288afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x288b00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x288b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x288b04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x288b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x288b08: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x288b08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x288b0c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x288b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x288b10: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x288b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x288b14: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x288b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x288b18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x288b18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x288b1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b20: 0xc0a2268  jal         func_2889A0
    ctx->pc = 0x288B20u;
    SET_GPR_U32(ctx, 31, 0x288B28u);
    ctx->pc = 0x288B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B20u;
    // 0x288b24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2889A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2889A0u, 0x288B20u, 0x288B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B28u;
label_288b28:
    // 0x288b28: 0xae20a500  sw          $zero, -0x5B00($s1)
    ctx->pc = 0x288b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294944000), GPR_U32(ctx, 0));
label_288b2c:
    // 0x288b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288b30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x288b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288b38: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x288b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x288b3c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x288b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288b40: 0x3e00008  jr          $ra
    ctx->pc = 0x288B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B40u;
        // 0x288b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288B48u;
    // 0x288b48: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x288b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x288b4c: 0x0  nop
    ctx->pc = 0x288b4cu;
    // NOP
    ctx->pc = 0x288b50u;
}
