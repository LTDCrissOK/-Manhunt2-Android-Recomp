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

// Function: sub_001856C0
// Address: 0x1856c0 - 0x185830
void sub_001856C0_0x1856c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001856C0_0x1856c0");
#endif

    switch (ctx->pc) {
        case 0x1856e0u: goto label_1856e0;
        case 0x18570cu: goto label_18570c;
        case 0x185738u: goto label_185738;
        case 0x18575cu: goto label_18575c;
        case 0x185780u: goto label_185780;
        case 0x1857a4u: goto label_1857a4;
        case 0x1857c8u: goto label_1857c8;
        case 0x1857ecu: goto label_1857ec;
        case 0x185810u: goto label_185810;
        default: break;
    }

    ctx->pc = 0x1856c0u;

    // 0x1856c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1856c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1856c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1856c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1856c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1856c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1856ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1856d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1856d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1856d4: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1856d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1856d8: 0xc0608e8  jal         func_1823A0
    ctx->pc = 0x1856D8u;
    SET_GPR_U32(ctx, 31, 0x1856E0u);
    ctx->pc = 0x1856DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1856D8u;
    // 0x1856dc: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1823A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1823A0u, 0x1856D8u, 0x1856E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856E0u;
label_1856e0:
    // 0x1856e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1856e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1856e4: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1856e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1856e8: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1856ec: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x1856ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1856f0: 0x2610bf34  addiu       $s0, $s0, -0x40CC
    ctx->pc = 0x1856f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950708));
    // 0x1856f4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1856f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1856f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1856f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1856fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1856fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x185700: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x185700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x185704: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185704u;
    SET_GPR_U32(ctx, 31, 0x18570Cu);
    ctx->pc = 0x185708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185704u;
    // 0x185708: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185704u, 0x18570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18570Cu;
label_18570c:
    // 0x18570c: 0x2610fe8c  addiu       $s0, $s0, -0x174
    ctx->pc = 0x18570cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966924));
    // 0x185710: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185714: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x185714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x185718: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185718u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18571c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185720: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185720u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185724: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185724u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185728: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x185728u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x18572c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18572cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185730: 0xc060450  jal         func_181140
    ctx->pc = 0x185730u;
    SET_GPR_U32(ctx, 31, 0x185738u);
    ctx->pc = 0x185734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185730u;
    // 0x185734: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185730u, 0x185738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185738u;
label_185738:
    // 0x185738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18573c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18573cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185740: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185740u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185744: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185744u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185748: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185748u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18574c: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x18574cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x185750: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185750u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185754: 0xc060450  jal         func_181140
    ctx->pc = 0x185754u;
    SET_GPR_U32(ctx, 31, 0x18575Cu);
    ctx->pc = 0x185758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185754u;
    // 0x185758: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185754u, 0x18575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18575Cu;
label_18575c:
    // 0x18575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185760: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185760u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185764: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185764u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185768: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185768u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18576c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18576cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185770: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x185770u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x185774: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185774u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185778: 0xc060450  jal         func_181140
    ctx->pc = 0x185778u;
    SET_GPR_U32(ctx, 31, 0x185780u);
    ctx->pc = 0x18577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185778u;
    // 0x18577c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185778u, 0x185780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185780u;
label_185780:
    // 0x185780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185784: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185788: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185788u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18578c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18578cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185790: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185790u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185794: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x185794u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x185798: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185798u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18579c: 0xc060450  jal         func_181140
    ctx->pc = 0x18579Cu;
    SET_GPR_U32(ctx, 31, 0x1857A4u);
    ctx->pc = 0x1857A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18579Cu;
    // 0x1857a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18579Cu, 0x1857A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857A4u;
label_1857a4:
    // 0x1857a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1857a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1857a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1857ac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1857acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1857b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1857b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1857b4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1857b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1857b8: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x1857b8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x1857bc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1857bcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1857c0: 0xc060450  jal         func_181140
    ctx->pc = 0x1857C0u;
    SET_GPR_U32(ctx, 31, 0x1857C8u);
    ctx->pc = 0x1857C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1857C0u;
    // 0x1857c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1857C0u, 0x1857C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857C8u;
label_1857c8:
    // 0x1857c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1857c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1857ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1857d0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1857d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1857d4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1857d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1857d8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1857d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1857dc: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x1857dcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x1857e0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1857e0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1857e4: 0xc060450  jal         func_181140
    ctx->pc = 0x1857E4u;
    SET_GPR_U32(ctx, 31, 0x1857ECu);
    ctx->pc = 0x1857E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1857E4u;
    // 0x1857e8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1857E4u, 0x1857ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857ECu;
label_1857ec:
    // 0x1857ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1857ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1857f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1857f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857f4: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x1857f4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x1857f8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1857f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1857fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1857fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x185800: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x185800u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x185804: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x185804u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x185808: 0xc060450  jal         func_181140
    ctx->pc = 0x185808u;
    SET_GPR_U32(ctx, 31, 0x185810u);
    ctx->pc = 0x18580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185808u;
    // 0x18580c: 0x46006446  mov.s       $f17, $f12 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185808u, 0x185810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185810u;
label_185810:
    // 0x185810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18581c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x18581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x185820: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x185820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185824: 0x3e00008  jr          $ra
    ctx->pc = 0x185824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185824u;
        // 0x185828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18582Cu;
    // 0x18582c: 0x0  nop
    ctx->pc = 0x18582cu;
    // NOP
    ctx->pc = 0x185830u;
}
