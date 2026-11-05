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

// Function: sub_0010B0A8
// Address: 0x10b0a8 - 0x10b140
void sub_0010B0A8_0x10b0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B0A8_0x10b0a8");
#endif

    switch (ctx->pc) {
        case 0x10b0e4u: goto label_10b0e4;
        case 0x10b118u: goto label_10b118;
        default: break;
    }

    ctx->pc = 0x10b0a8u;

    // 0x10b0a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b0b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b0bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10b0c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10b0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10b0cc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x10b0ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0d0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10b0d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10b0d4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x10b0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0d8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10b0dc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B0DCu;
    SET_GPR_U32(ctx, 31, 0x10B0E4u);
    ctx->pc = 0x10B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0DCu;
    // 0x10b0e0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B0DCu, 0x10B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0E4u;
label_10b0e4:
    // 0x10b0e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b0e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0e8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b0ec: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B0ECu;
    {
        const bool branch_taken_0x10b0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B0ECu;
        // 0x10b0f0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0ec) {
            ctx->pc = 0x10B118u;
            goto label_10b118;
        }
    }
    ctx->pc = 0x10B0F4u;
    // 0x10b0f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b0fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10b0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b100: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b104: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10b104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b108: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x10b108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b10c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10b10cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10b110: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x10B110u;
    SET_GPR_U32(ctx, 31, 0x10B118u);
    ctx->pc = 0x10B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B110u;
    // 0x10b114: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x10B110u, 0x10B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B118u;
label_10b118:
    // 0x10b118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b124: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b128: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10b128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b12c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10b12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10b130: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10b134: 0x3e00008  jr          $ra
    ctx->pc = 0x10B134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B134u;
        // 0x10b138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B13Cu;
    // 0x10b13c: 0x0  nop
    ctx->pc = 0x10b13cu;
    // NOP
    ctx->pc = 0x10b140u;
}
