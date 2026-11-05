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

// Function: sub_00288B50
// Address: 0x288b50 - 0x288c08
void sub_00288B50_0x288b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288B50_0x288b50");
#endif

    switch (ctx->pc) {
        case 0x288b94u: goto label_288b94;
        case 0x288bb8u: goto label_288bb8;
        case 0x288be4u: goto label_288be4;
        default: break;
    }

    ctx->pc = 0x288b50u;

    // 0x288b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x288b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x288b58: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x288b58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x288b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288b60: 0x8e22a504  lw          $v0, -0x5AFC($s1)
    ctx->pc = 0x288b60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA504u));
    // 0x288b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x288b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x288b68: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x288b68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x288b6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x288B6Cu;
    {
        const bool branch_taken_0x288b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B6Cu;
        // 0x288b70: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b6c) {
            ctx->pc = 0x288BE8u;
            goto label_288be8;
        }
    }
    ctx->pc = 0x288B74u;
    // 0x288b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288b78: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x288b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x288b7c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x288b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x288b80: 0x2610c930  addiu       $s0, $s0, -0x36D0
    ctx->pc = 0x288b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953264));
    // 0x288b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x288b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288b88: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x288b88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x288b8c: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x288B8Cu;
    SET_GPR_U32(ctx, 31, 0x288B94u);
    ctx->pc = 0x288B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B8Cu;
    // 0x288b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x288B8Cu, 0x288B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B94u;
label_288b94:
    // 0x288b94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x288b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x288b98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x288b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288b9c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x288b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x288ba0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x288ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x288ba4: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x288ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x288ba8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x288ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x288bac: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x288bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x288bb0: 0xc0a2260  jal         func_288980
    ctx->pc = 0x288BB0u;
    SET_GPR_U32(ctx, 31, 0x288BB8u);
    ctx->pc = 0x288BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BB0u;
    // 0x288bb4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288980u, 0x288BB0u, 0x288BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BB8u;
label_288bb8:
    // 0x288bb8: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x288bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x288bbc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x288bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x288bc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x288bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x288bc4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x288bc4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x288bc8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x288bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x288bcc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x288bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x288bd0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x288bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x288bd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x288bd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x288bd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bdc: 0xc0a2268  jal         func_2889A0
    ctx->pc = 0x288BDCu;
    SET_GPR_U32(ctx, 31, 0x288BE4u);
    ctx->pc = 0x288BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BDCu;
    // 0x288be0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2889A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2889A0u, 0x288BDCu, 0x288BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BE4u;
label_288be4:
    // 0x288be4: 0xae20a504  sw          $zero, -0x5AFC($s1)
    ctx->pc = 0x288be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294944004), GPR_U32(ctx, 0));
label_288be8:
    // 0x288be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288bec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x288becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288bf4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x288bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x288bf8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x288bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x288BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BFCu;
        // 0x288c00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288C04u;
    // 0x288c04: 0x0  nop
    ctx->pc = 0x288c04u;
    // NOP
    ctx->pc = 0x288c08u;
}
