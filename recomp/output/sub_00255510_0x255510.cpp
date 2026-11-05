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

// Function: sub_00255510
// Address: 0x255510 - 0x2555b8
void sub_00255510_0x255510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255510_0x255510");
#endif

    switch (ctx->pc) {
        case 0x255538u: goto label_255538;
        case 0x25555cu: goto label_25555c;
        case 0x255584u: goto label_255584;
        case 0x255590u: goto label_255590;
        default: break;
    }

    ctx->pc = 0x255510u;

    // 0x255510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x255514: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x255514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x255518: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x255518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25551c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25551cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255520: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x255520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x255524: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x255524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x255528: 0x8e30036c  lw          $s0, 0x36C($s1)
    ctx->pc = 0x255528u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x25552c: 0x32100008  andi        $s0, $s0, 0x8
    ctx->pc = 0x25552cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x255530: 0xc08b978  jal         func_22E5E0
    ctx->pc = 0x255530u;
    SET_GPR_U32(ctx, 31, 0x255538u);
    ctx->pc = 0x255534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255530u;
    // 0x255534: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E5E0u, 0x255530u, 0x255538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255538u;
label_255538:
    // 0x255538: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x255538u;
    {
        const bool branch_taken_0x255538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255538u;
        // 0x25553c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255538) {
            ctx->pc = 0x25559Cu;
            goto label_25559c;
        }
    }
    ctx->pc = 0x255540u;
    // 0x255540: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x255540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x255544: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x255544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x255548: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x255548u;
    {
        const bool branch_taken_0x255548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255548u;
        // 0x25554c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255548) {
            ctx->pc = 0x2555A0u;
            goto label_2555a0;
        }
    }
    ctx->pc = 0x255550u;
    // 0x255550: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x255550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255554: 0xc06fc04  jal         func_1BF010
    ctx->pc = 0x255554u;
    SET_GPR_U32(ctx, 31, 0x25555Cu);
    ctx->pc = 0x255558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255554u;
    // 0x255558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF010u, 0x255554u, 0x25555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25555Cu;
label_25555c:
    // 0x25555c: 0x8e300fe8  lw          $s0, 0xFE8($s1)
    ctx->pc = 0x25555cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x255560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255568: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x255568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x25556c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255570: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x255570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x255574: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x255574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x255578: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x255578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x25557c: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x25557Cu;
    SET_GPR_U32(ctx, 31, 0x255584u);
    ctx->pc = 0x255580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25557Cu;
    // 0x255580: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x25557Cu, 0x255584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255584u;
label_255584:
    // 0x255584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255588: 0xc0701da  jal         func_1C0768
    ctx->pc = 0x255588u;
    SET_GPR_U32(ctx, 31, 0x255590u);
    ctx->pc = 0x25558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255588u;
    // 0x25558c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x255588u, 0x255590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255590u;
label_255590:
    // 0x255590: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x255590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x255594: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x255594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x255598: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x255598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_25559c:
    // 0x25559c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x25559cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2555a0:
    // 0x2555a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2555a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2555a4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2555a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2555a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2555a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2555ac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2555acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2555b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2555B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2555B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555B0u;
        // 0x2555b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2555B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2555B8u;
}
