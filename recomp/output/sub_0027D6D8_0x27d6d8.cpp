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

// Function: sub_0027D6D8
// Address: 0x27d6d8 - 0x27d7a0
void sub_0027D6D8_0x27d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D6D8_0x27d6d8");
#endif

    switch (ctx->pc) {
        case 0x27d71cu: goto label_27d71c;
        case 0x27d740u: goto label_27d740;
        case 0x27d74cu: goto label_27d74c;
        case 0x27d76cu: goto label_27d76c;
        default: break;
    }

    ctx->pc = 0x27d6d8u;

    // 0x27d6d8: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x27d6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x27d6dc: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x27d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x27d6e0: 0xffb10218  sd          $s1, 0x218($sp)
    ctx->pc = 0x27d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 17));
    // 0x27d6e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27d6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6e8: 0xe7b80250  swc1        $f24, 0x250($sp)
    ctx->pc = 0x27d6e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x27d6ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27d6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6f0: 0xe7b70248  swc1        $f23, 0x248($sp)
    ctx->pc = 0x27d6f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x27d6f4: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x27d6f4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x27d6f8: 0xe7b60240  swc1        $f22, 0x240($sp)
    ctx->pc = 0x27d6f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x27d6fc: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x27d6fcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x27d700: 0xe7b50238  swc1        $f21, 0x238($sp)
    ctx->pc = 0x27d700u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x27d704: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x27d704u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x27d708: 0xe7b40230  swc1        $f20, 0x230($sp)
    ctx->pc = 0x27d708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x27d70c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x27d70cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x27d710: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x27d710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x27d714: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x27D714u;
    SET_GPR_U32(ctx, 31, 0x27D71Cu);
    ctx->pc = 0x27D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D714u;
    // 0x27d718: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27D714u, 0x27D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D71Cu;
label_27d71c:
    // 0x27d71c: 0x2c420101  sltiu       $v0, $v0, 0x101
    ctx->pc = 0x27d71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x27d720: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D720u;
    {
        const bool branch_taken_0x27d720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D720u;
        // 0x27d724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d720) {
            ctx->pc = 0x27D744u;
            goto label_27d744;
        }
    }
    ctx->pc = 0x27D728u;
    // 0x27d728: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x27d728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x27d72c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27d730: 0x2484b0e0  addiu       $a0, $a0, -0x4F20
    ctx->pc = 0x27d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
    // 0x27d734: 0x24a597f8  addiu       $a1, $a1, -0x6808
    ctx->pc = 0x27d734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940664));
    // 0x27d738: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x27D738u;
    SET_GPR_U32(ctx, 31, 0x27D740u);
    ctx->pc = 0x27D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D738u;
    // 0x27d73c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27D738u, 0x27D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D740u;
label_27d740:
    // 0x27d740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d744:
    // 0x27d744: 0xc0a0c4c  jal         func_283130
    ctx->pc = 0x27D744u;
    SET_GPR_U32(ctx, 31, 0x27D74Cu);
    ctx->pc = 0x27D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D744u;
    // 0x27d748: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283130u, 0x27D744u, 0x27D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D74Cu;
label_27d74c:
    // 0x27d74c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27d74cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27d750: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27d750u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27d754: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x27d754u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x27d758: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x27d758u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x27d75c: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x27d75cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x27d760: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d764: 0xc09f662  jal         func_27D988
    ctx->pc = 0x27D764u;
    SET_GPR_U32(ctx, 31, 0x27D76Cu);
    ctx->pc = 0x27D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D764u;
    // 0x27d768: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x27D764u, 0x27D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D76Cu;
label_27d76c:
    // 0x27d76c: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x27d76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x27d770: 0xdfb10218  ld          $s1, 0x218($sp)
    ctx->pc = 0x27d770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x27d774: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x27d774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x27d778: 0xc7b80250  lwc1        $f24, 0x250($sp)
    ctx->pc = 0x27d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27d77c: 0xc7b70248  lwc1        $f23, 0x248($sp)
    ctx->pc = 0x27d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27d780: 0xc7b60240  lwc1        $f22, 0x240($sp)
    ctx->pc = 0x27d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27d784: 0xc7b50238  lwc1        $f21, 0x238($sp)
    ctx->pc = 0x27d784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27d788: 0xc7b40230  lwc1        $f20, 0x230($sp)
    ctx->pc = 0x27d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d78c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D78Cu;
        // 0x27d790: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D794u;
    // 0x27d794: 0x0  nop
    ctx->pc = 0x27d794u;
    // NOP
    // 0x27d798: 0x27bd0260  addiu       $sp, $sp, 0x260
    ctx->pc = 0x27d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x27d79c: 0x0  nop
    ctx->pc = 0x27d79cu;
    // NOP
    ctx->pc = 0x27d7a0u;
}
