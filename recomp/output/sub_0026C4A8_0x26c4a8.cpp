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

// Function: sub_0026C4A8
// Address: 0x26c4a8 - 0x26c580
void sub_0026C4A8_0x26c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C4A8_0x26c4a8");
#endif

    switch (ctx->pc) {
        case 0x26c4ccu: goto label_26c4cc;
        case 0x26c514u: goto label_26c514;
        case 0x26c51cu: goto label_26c51c;
        default: break;
    }

    ctx->pc = 0x26c4a8u;

    // 0x26c4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c4ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c4b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c4b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26c4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26c4bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26c4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26c4c4: 0xc09b9ee  jal         func_26E7B8
    ctx->pc = 0x26C4C4u;
    SET_GPR_U32(ctx, 31, 0x26C4CCu);
    ctx->pc = 0x26C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4C4u;
    // 0x26c4c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E7B8u, 0x26C4C4u, 0x26C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4CCu;
label_26c4cc:
    // 0x26c4cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26c4ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c4d0: 0xfa210220  sqc2        $vf1, 0x220($s1)
    ctx->pc = 0x26c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c4d4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26c4d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26c4d8: 0xfa210230  sqc2        $vf1, 0x230($s1)
    ctx->pc = 0x26c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c4dc: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x26c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x26c4e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c4e4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C4E4u;
    {
        const bool branch_taken_0x26c4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4E4u;
        // 0x26c4e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4e4) {
            ctx->pc = 0x26C50Cu;
            goto label_26c50c;
        }
    }
    ctx->pc = 0x26C4ECu;
    // 0x26c4ec: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x26c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x26c4f0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26c4f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c4f4: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x26c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c4f8: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x26c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x26c4fc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26c4fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26c500: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x26c500u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c504: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26C504u;
    {
        const bool branch_taken_0x26c504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C504u;
        // 0x26c508: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c504) {
            ctx->pc = 0x26C56Cu;
            goto label_26c56c;
        }
    }
    ctx->pc = 0x26C50Cu;
label_26c50c:
    // 0x26c50c: 0xc09afb0  jal         func_26BEC0
    ctx->pc = 0x26C50Cu;
    SET_GPR_U32(ctx, 31, 0x26C514u);
    ctx->pc = 0x26C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C50Cu;
    // 0x26c510: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEC0u, 0x26C50Cu, 0x26C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C514u;
label_26c514:
    // 0x26c514: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x26C514u;
    SET_GPR_U32(ctx, 31, 0x26C51Cu);
    ctx->pc = 0x26C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C514u;
    // 0x26c518: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26C514u, 0x26C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C51Cu;
label_26c51c:
    // 0x26c51c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x26c51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c520: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x26c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26c524: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x26c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c528: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x26c528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x26c52c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x26c52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c530: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x26c530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c534: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x26c534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x26c538: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x26c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c53c: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x26c53cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x26c540: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x26c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26c544: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x26c544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26c548: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x26c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c54c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x26c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c550: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x26c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c554: 0xe4440020  swc1        $f4, 0x20($v0)
    ctx->pc = 0x26c554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x26c558: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x26c558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x26c55c: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x26c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    // 0x26c560: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x26c560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x26c564: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x26c564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x26c568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26c56c:
    // 0x26c56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c570: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26c570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c574: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26c574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c578: 0x3e00008  jr          $ra
    ctx->pc = 0x26C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C578u;
        // 0x26c57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C580u;
}
