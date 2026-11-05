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

// Function: sub_00106668
// Address: 0x106668 - 0x1066d0
void sub_00106668_0x106668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106668_0x106668");
#endif

    switch (ctx->pc) {
        case 0x106698u: goto label_106698;
        default: break;
    }

    ctx->pc = 0x106668u;

    // 0x106668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10666c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10666cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x106670: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x106670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x106674: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x106674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x106678: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x106678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10667c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x106680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106688: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10668c: 0x92070038  lbu         $a3, 0x38($s0)
    ctx->pc = 0x10668cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x106690: 0xc0c4b92  jal         func_312E48
    ctx->pc = 0x106690u;
    SET_GPR_U32(ctx, 31, 0x106698u);
    ctx->pc = 0x106694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106690u;
    // 0x106694: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312E48u, 0x106690u, 0x106698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106698u;
label_106698:
    // 0x106698: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x106698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10669c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x10669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1066a0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1066a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1066a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1066a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1066a8: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1066a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x1066ac: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1066acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1066b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1066b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1066b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1066b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1066b8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1066b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1066bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1066bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1066c0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1066c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1066c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1066c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1066c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1066C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1066CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066C8u;
        // 0x1066cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1066C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1066D0u;
}
