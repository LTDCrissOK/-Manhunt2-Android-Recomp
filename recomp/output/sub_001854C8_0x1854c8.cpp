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

// Function: sub_001854C8
// Address: 0x1854c8 - 0x1856c0
void sub_001854C8_0x1854c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001854C8_0x1854c8");
#endif

    switch (ctx->pc) {
        case 0x1854ecu: goto label_1854ec;
        case 0x185520u: goto label_185520;
        case 0x185540u: goto label_185540;
        case 0x18555cu: goto label_18555c;
        case 0x185580u: goto label_185580;
        case 0x1855a4u: goto label_1855a4;
        case 0x1855c8u: goto label_1855c8;
        case 0x1855ecu: goto label_1855ec;
        case 0x185610u: goto label_185610;
        case 0x185634u: goto label_185634;
        case 0x185658u: goto label_185658;
        case 0x18567cu: goto label_18567c;
        case 0x1856a0u: goto label_1856a0;
        default: break;
    }

    ctx->pc = 0x1854c8u;

    // 0x1854c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1854c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1854cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1854ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1854d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1854d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1854d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1854d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1854d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1854dc: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1854dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1854e0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1854e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1854e4: 0xc0608e8  jal         func_1823A0
    ctx->pc = 0x1854E4u;
    SET_GPR_U32(ctx, 31, 0x1854ECu);
    ctx->pc = 0x1854E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854E4u;
    // 0x1854e8: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1823A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1823A0u, 0x1854E4u, 0x1854ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854ECu;
label_1854ec:
    // 0x1854ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1854ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1854f0: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1854f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1854f4: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1854f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1854f8: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x1854f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1854fc: 0x2610bf34  addiu       $s0, $s0, -0x40CC
    ctx->pc = 0x1854fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950708));
    // 0x185500: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185504: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x185504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x185508: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x185508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x18550c: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x18550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    // 0x185510: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x185510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x185514: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x185514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x185518: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185518u;
    SET_GPR_U32(ctx, 31, 0x185520u);
    ctx->pc = 0x18551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185518u;
    // 0x18551c: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185518u, 0x185520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185520u;
label_185520:
    // 0x185520: 0x2610fe8c  addiu       $s0, $s0, -0x174
    ctx->pc = 0x185520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966924));
    // 0x185524: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185528: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x185528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x18552c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18552cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185534: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x185534u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x185538: 0xc060498  jal         func_181260
    ctx->pc = 0x185538u;
    SET_GPR_U32(ctx, 31, 0x185540u);
    ctx->pc = 0x18553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185538u;
    // 0x18553c: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x185538u, 0x185540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185540u;
label_185540:
    // 0x185540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185544: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185544u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185548: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185548u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18554c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18554cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185550: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185550u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185554: 0xc06049e  jal         func_181278
    ctx->pc = 0x185554u;
    SET_GPR_U32(ctx, 31, 0x18555Cu);
    ctx->pc = 0x185558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185554u;
    // 0x185558: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x185554u, 0x18555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18555Cu;
label_18555c:
    // 0x18555c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185560: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185560u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185564: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185564u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185568: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x185568u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x18556c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18556cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185570: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185570u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185574: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185574u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185578: 0xc060450  jal         func_181140
    ctx->pc = 0x185578u;
    SET_GPR_U32(ctx, 31, 0x185580u);
    ctx->pc = 0x18557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185578u;
    // 0x18557c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185578u, 0x185580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185580u;
label_185580:
    // 0x185580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185584: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185588: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185588u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18558c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18558cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185590: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185590u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185594: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x185594u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x185598: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185598u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18559c: 0xc060450  jal         func_181140
    ctx->pc = 0x18559Cu;
    SET_GPR_U32(ctx, 31, 0x1855A4u);
    ctx->pc = 0x1855A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18559Cu;
    // 0x1855a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18559Cu, 0x1855A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855A4u;
label_1855a4:
    // 0x1855a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1855a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1855a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1855ac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1855acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1855b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1855b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1855b4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1855b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1855b8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1855b8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1855bc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1855bcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1855c0: 0xc060450  jal         func_181140
    ctx->pc = 0x1855C0u;
    SET_GPR_U32(ctx, 31, 0x1855C8u);
    ctx->pc = 0x1855C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855C0u;
    // 0x1855c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1855C0u, 0x1855C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855C8u;
label_1855c8:
    // 0x1855c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1855c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1855ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1855d0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1855d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1855d4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1855d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1855d8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1855d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1855dc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1855dcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1855e0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1855e0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1855e4: 0xc060450  jal         func_181140
    ctx->pc = 0x1855E4u;
    SET_GPR_U32(ctx, 31, 0x1855ECu);
    ctx->pc = 0x1855E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855E4u;
    // 0x1855e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1855E4u, 0x1855ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855ECu;
label_1855ec:
    // 0x1855ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1855ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1855f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1855f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1855f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1855f8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1855f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1855fc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1855fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185600: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x185600u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x185604: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185604u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185608: 0xc060450  jal         func_181140
    ctx->pc = 0x185608u;
    SET_GPR_U32(ctx, 31, 0x185610u);
    ctx->pc = 0x18560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185608u;
    // 0x18560c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185608u, 0x185610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185610u;
label_185610:
    // 0x185610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185618: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185618u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x18561c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18561cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185620: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185620u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185624: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x185624u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x185628: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185628u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18562c: 0xc060450  jal         func_181140
    ctx->pc = 0x18562Cu;
    SET_GPR_U32(ctx, 31, 0x185634u);
    ctx->pc = 0x185630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18562Cu;
    // 0x185630: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18562Cu, 0x185634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185634u;
label_185634:
    // 0x185634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185638: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185638u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18563c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x18563cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185640: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185640u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185644: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x185644u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x185648: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185648u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18564c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18564cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185650: 0xc060450  jal         func_181140
    ctx->pc = 0x185650u;
    SET_GPR_U32(ctx, 31, 0x185658u);
    ctx->pc = 0x185654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185650u;
    // 0x185654: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185650u, 0x185658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185658u;
label_185658:
    // 0x185658: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x185658u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x18565c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18565cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185660: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185664: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185664u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185668: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185668u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18566c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18566cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185670: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185670u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185674: 0xc060450  jal         func_181140
    ctx->pc = 0x185674u;
    SET_GPR_U32(ctx, 31, 0x18567Cu);
    ctx->pc = 0x185678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185674u;
    // 0x185678: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185674u, 0x18567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18567Cu;
label_18567c:
    // 0x18567c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18567cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185684: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185688: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x185688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18568c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x18568cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x185690: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x185690u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x185694: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x185694u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x185698: 0xc060450  jal         func_181140
    ctx->pc = 0x185698u;
    SET_GPR_U32(ctx, 31, 0x1856A0u);
    ctx->pc = 0x18569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185698u;
    // 0x18569c: 0x46006446  mov.s       $f17, $f12 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185698u, 0x1856A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856A0u;
label_1856a0:
    // 0x1856a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1856a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1856a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1856a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1856a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1856a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1856ac: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1856acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1856b0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1856b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1856b4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1856b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1856b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1856B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1856BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856B8u;
        // 0x1856bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1856B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1856C0u;
}
