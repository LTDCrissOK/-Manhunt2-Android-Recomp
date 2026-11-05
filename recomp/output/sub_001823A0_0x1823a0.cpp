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

// Function: sub_001823A0
// Address: 0x1823a0 - 0x182670
void sub_001823A0_0x1823a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001823A0_0x1823a0");
#endif

    switch (ctx->pc) {
        case 0x182400u: goto label_182400;
        case 0x182424u: goto label_182424;
        case 0x182448u: goto label_182448;
        case 0x18246cu: goto label_18246c;
        case 0x182490u: goto label_182490;
        case 0x1824b4u: goto label_1824b4;
        case 0x1824d8u: goto label_1824d8;
        case 0x1824fcu: goto label_1824fc;
        case 0x182520u: goto label_182520;
        case 0x182544u: goto label_182544;
        case 0x182568u: goto label_182568;
        case 0x18258cu: goto label_18258c;
        case 0x1825b0u: goto label_1825b0;
        case 0x1825ccu: goto label_1825cc;
        case 0x182604u: goto label_182604;
        case 0x18261cu: goto label_18261c;
        case 0x182650u: goto label_182650;
        default: break;
    }

    ctx->pc = 0x1823a0u;

    // 0x1823a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1823a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1823a4: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1823a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1823a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1823a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1823ac: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x1823acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1823b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1823b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1823b4: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x1823b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1823b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1823bc: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x1823bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x1823c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1823c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1823c4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1823c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1823c8: 0x2622012c  addiu       $v0, $s1, 0x12C
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x1823cc: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1823ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1823d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1823d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1823d4: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1823d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1823d8: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1823d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1823dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1823dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1823e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1823e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823e4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1823e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1823e8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1823e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1823ec: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1823ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1823f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1823f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1823f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1823f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1823f8: 0xc060498  jal         func_181260
    ctx->pc = 0x1823F8u;
    SET_GPR_U32(ctx, 31, 0x182400u);
    ctx->pc = 0x1823FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1823F8u;
    // 0x1823fc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x1823F8u, 0x182400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182400u;
label_182400:
    // 0x182400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182404: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182404u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182408: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182408u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18240c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18240cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182410: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182410u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182414: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182414u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182418: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182418u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18241c: 0xc060450  jal         func_181140
    ctx->pc = 0x18241Cu;
    SET_GPR_U32(ctx, 31, 0x182424u);
    ctx->pc = 0x182420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18241Cu;
    // 0x182420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18241Cu, 0x182424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182424u;
label_182424:
    // 0x182424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182428: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182428u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18242c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18242cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182430: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182430u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182434: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182434u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182438: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182438u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18243c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18243cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182440: 0xc060450  jal         func_181140
    ctx->pc = 0x182440u;
    SET_GPR_U32(ctx, 31, 0x182448u);
    ctx->pc = 0x182444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182440u;
    // 0x182444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182440u, 0x182448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182448u;
label_182448:
    // 0x182448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18244c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18244cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182450: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182450u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182454: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182454u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182458: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182458u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18245c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18245cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182460: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182460u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182464: 0xc060450  jal         func_181140
    ctx->pc = 0x182464u;
    SET_GPR_U32(ctx, 31, 0x18246Cu);
    ctx->pc = 0x182468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182464u;
    // 0x182468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182464u, 0x18246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18246Cu;
label_18246c:
    // 0x18246c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18246cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182470: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182474: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182474u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182478: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182478u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18247c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18247cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182480: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182480u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182484: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182484u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182488: 0xc060450  jal         func_181140
    ctx->pc = 0x182488u;
    SET_GPR_U32(ctx, 31, 0x182490u);
    ctx->pc = 0x18248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182488u;
    // 0x18248c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182488u, 0x182490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182490u;
label_182490:
    // 0x182490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182494: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182498: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182498u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18249c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18249cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1824a0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1824a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1824a4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1824a4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1824a8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1824a8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1824ac: 0xc060450  jal         func_181140
    ctx->pc = 0x1824ACu;
    SET_GPR_U32(ctx, 31, 0x1824B4u);
    ctx->pc = 0x1824B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824ACu;
    // 0x1824b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1824ACu, 0x1824B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824B4u;
label_1824b4:
    // 0x1824b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1824b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1824b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1824bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1824bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1824c0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1824c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1824c4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1824c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1824c8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1824c8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1824cc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1824ccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1824d0: 0xc060450  jal         func_181140
    ctx->pc = 0x1824D0u;
    SET_GPR_U32(ctx, 31, 0x1824D8u);
    ctx->pc = 0x1824D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824D0u;
    // 0x1824d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1824D0u, 0x1824D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824D8u;
label_1824d8:
    // 0x1824d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1824d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1824dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1824e0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1824e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1824e4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1824e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1824e8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1824e8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1824ec: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1824ecu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1824f0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1824f0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1824f4: 0xc060450  jal         func_181140
    ctx->pc = 0x1824F4u;
    SET_GPR_U32(ctx, 31, 0x1824FCu);
    ctx->pc = 0x1824F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824F4u;
    // 0x1824f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1824F4u, 0x1824FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824FCu;
label_1824fc:
    // 0x1824fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1824fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182500: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182500u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182504: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182504u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182508: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182508u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18250c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18250cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182510: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182510u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182514: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182514u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182518: 0xc060450  jal         func_181140
    ctx->pc = 0x182518u;
    SET_GPR_U32(ctx, 31, 0x182520u);
    ctx->pc = 0x18251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182518u;
    // 0x18251c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182518u, 0x182520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182520u;
label_182520:
    // 0x182520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182524: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182528: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182528u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18252c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18252cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182530: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182530u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182534: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182534u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182538: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182538u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18253c: 0xc060450  jal         func_181140
    ctx->pc = 0x18253Cu;
    SET_GPR_U32(ctx, 31, 0x182544u);
    ctx->pc = 0x182540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18253Cu;
    // 0x182540: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18253Cu, 0x182544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182544u;
label_182544:
    // 0x182544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182548: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182548u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18254c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18254cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182550: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182550u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182554: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182554u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182558: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182558u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18255c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18255cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182560: 0xc060450  jal         func_181140
    ctx->pc = 0x182560u;
    SET_GPR_U32(ctx, 31, 0x182568u);
    ctx->pc = 0x182564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182560u;
    // 0x182564: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182560u, 0x182568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182568u;
label_182568:
    // 0x182568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18256c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18256cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182570: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182570u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182574: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182574u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182578: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182578u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18257c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18257cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182580: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182580u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182584: 0xc060450  jal         func_181140
    ctx->pc = 0x182584u;
    SET_GPR_U32(ctx, 31, 0x18258Cu);
    ctx->pc = 0x182588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182584u;
    // 0x182588: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182584u, 0x18258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18258Cu;
label_18258c:
    // 0x18258c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x18258cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x182590: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182590u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182598: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18259c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18259cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1825a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1825a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1825a4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1825a4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1825a8: 0xc060450  jal         func_181140
    ctx->pc = 0x1825A8u;
    SET_GPR_U32(ctx, 31, 0x1825B0u);
    ctx->pc = 0x1825ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825A8u;
    // 0x1825ac: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1825A8u, 0x1825B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825B0u;
label_1825b0:
    // 0x1825b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1825b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1825b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1825b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1825b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1825bc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1825bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1825c0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1825c0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1825c4: 0xc06049e  jal         func_181278
    ctx->pc = 0x1825C4u;
    SET_GPR_U32(ctx, 31, 0x1825CCu);
    ctx->pc = 0x1825C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825C4u;
    // 0x1825c8: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x1825C4u, 0x1825CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825CCu;
label_1825cc:
    // 0x1825cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1825ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1825d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1825d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1825d4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1825d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1825d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1825d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825dc: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1825dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1825e0: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1825e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1825e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1825e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1825e8: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1825e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1825ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1825f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1825f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1825f4: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1825f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x1825f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1825f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1825fc: 0xc0604a6  jal         func_181298
    ctx->pc = 0x1825FCu;
    SET_GPR_U32(ctx, 31, 0x182604u);
    ctx->pc = 0x182600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825FCu;
    // 0x182600: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x1825FCu, 0x182604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182604u;
label_182604:
    // 0x182604: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x182604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x182608: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x182608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18260c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182610: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182614: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x182614u;
    SET_GPR_U32(ctx, 31, 0x18261Cu);
    ctx->pc = 0x182618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182614u;
    // 0x182618: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x182614u, 0x18261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18261Cu;
label_18261c:
    // 0x18261c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x18261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x182620: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x182620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x182624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182628: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x182628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x18262c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18262cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182630: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x182630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x182634: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x182634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x182638: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18263c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x18263cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x182640: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x182640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x182644: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x182644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x182648: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x182648u;
    SET_GPR_U32(ctx, 31, 0x182650u);
    ctx->pc = 0x18264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182648u;
    // 0x18264c: 0x24a5f830  addiu       $a1, $a1, -0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x182648u, 0x182650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182650u;
label_182650:
    // 0x182650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182658: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18265c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18265cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182660: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x182660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182664: 0x3e00008  jr          $ra
    ctx->pc = 0x182664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182664u;
        // 0x182668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18266Cu;
    // 0x18266c: 0x0  nop
    ctx->pc = 0x18266cu;
    // NOP
    ctx->pc = 0x182670u;
}
