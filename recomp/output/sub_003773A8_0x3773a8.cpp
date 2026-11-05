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

// Function: sub_003773A8
// Address: 0x3773a8 - 0x3774f0
void sub_003773A8_0x3773a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003773A8_0x3773a8");
#endif

    switch (ctx->pc) {
        case 0x3773c8u: goto label_3773c8;
        case 0x3773d4u: goto label_3773d4;
        case 0x3773f4u: goto label_3773f4;
        case 0x377470u: goto label_377470;
        case 0x377490u: goto label_377490;
        case 0x3774a4u: goto label_3774a4;
        case 0x3774b0u: goto label_3774b0;
        case 0x3774c8u: goto label_3774c8;
        case 0x3774d4u: goto label_3774d4;
        default: break;
    }

    ctx->pc = 0x3773a8u;

    // 0x3773a8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3773a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3773ac: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3773acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3773b0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x3773b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x3773b4: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x3773b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x3773b8: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x3773b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x3773bc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3773bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x3773c0: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x3773C0u;
    SET_GPR_U32(ctx, 31, 0x3773C8u);
    ctx->pc = 0x3773C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3773C0u;
    // 0x3773c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x3773C0u, 0x3773C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773C8u;
label_3773c8:
    // 0x3773c8: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3773c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3773cc: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x3773CCu;
    SET_GPR_U32(ctx, 31, 0x3773D4u);
    ctx->pc = 0x3773D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3773CCu;
    // 0x3773d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x3773CCu, 0x3773D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773D4u;
label_3773d4:
    // 0x3773d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3773d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3773d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3773d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3773dc: 0x24626028  addiu       $v0, $v1, 0x6028
    ctx->pc = 0x3773dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24616));
    // 0x3773e0: 0xc46e6028  lwc1        $f14, 0x6028($v1)
    ctx->pc = 0x3773e0u;
    { uint32_t bits = FAST_READ32(0x6C6028u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3773e4: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x3773e4u;
    { uint32_t bits = FAST_READ32(0x6C6030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3773e8: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x3773e8u;
    { uint32_t bits = FAST_READ32(0x6C6034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3773ec: 0xc0dece4  jal         func_37B390
    ctx->pc = 0x3773ECu;
    SET_GPR_U32(ctx, 31, 0x3773F4u);
    ctx->pc = 0x3773F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3773ECu;
    // 0x3773f0: 0xc44f0004  lwc1        $f15, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B390u, 0x3773ECu, 0x3773F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773F4u;
label_3773f4:
    // 0x3773f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3773f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3773f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3773f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3773fc: 0x8c45cd30  lw          $a1, -0x32D0($v0)
    ctx->pc = 0x3773fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FCD30u));
    // 0x377400: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x377400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x377404: 0x2484cd20  addiu       $a0, $a0, -0x32E0
    ctx->pc = 0x377404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954272));
    // 0x377408: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x377408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x37740c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x37740cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x377410: 0x8cc72d50  lw          $a3, 0x2D50($a2)
    ctx->pc = 0x377410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11600)));
    // 0x377414: 0x2463cd28  addiu       $v1, $v1, -0x32D8
    ctx->pc = 0x377414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954280));
    // 0x377418: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x377418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x37741c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x37741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x377420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377424: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x377424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x377428: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x377428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37742c: 0xc4ad0000  lwc1        $f13, 0x0($a1)
    ctx->pc = 0x37742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x377430: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x377430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x377434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x377434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x377438: 0x0  nop
    ctx->pc = 0x377438u;
    // NOP
    // 0x37743c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37743cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x377440: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x377440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x377444: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x377444u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x377448: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x377448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37744c: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x37744cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x377450: 0x24a56038  addiu       $a1, $a1, 0x6038
    ctx->pc = 0x377450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24632));
    // 0x377454: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x377454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x377458: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x377458u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x37745c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x37745cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x377460: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x377460u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x377464: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x377464u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x377468: 0xc0decb4  jal         func_37B2D0
    ctx->pc = 0x377468u;
    SET_GPR_U32(ctx, 31, 0x377470u);
    ctx->pc = 0x37746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377468u;
    // 0x37746c: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2D0u, 0x377468u, 0x377470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377470u;
label_377470:
    // 0x377470: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x377470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x377474: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x377474u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x377478: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x377478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37747c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x37747cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377480: 0x26105ce0  addiu       $s0, $s0, 0x5CE0
    ctx->pc = 0x377480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23776));
    // 0x377484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377488: 0xc0ded20  jal         func_37B480
    ctx->pc = 0x377488u;
    SET_GPR_U32(ctx, 31, 0x377490u);
    ctx->pc = 0x37748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377488u;
    // 0x37748c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B480u, 0x377488u, 0x377490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377490u;
label_377490:
    // 0x377490: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x377490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x377494: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x377494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377498: 0x24c65b80  addiu       $a2, $a2, 0x5B80
    ctx->pc = 0x377498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23424));
    // 0x37749c: 0xc0ded20  jal         func_37B480
    ctx->pc = 0x37749Cu;
    SET_GPR_U32(ctx, 31, 0x3774A4u);
    ctx->pc = 0x3774A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37749Cu;
    // 0x3774a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B480u, 0x37749Cu, 0x3774A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3774A4u;
label_3774a4:
    // 0x3774a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3774a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774a8: 0xc0ded16  jal         func_37B458
    ctx->pc = 0x3774A8u;
    SET_GPR_U32(ctx, 31, 0x3774B0u);
    ctx->pc = 0x3774ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3774A8u;
    // 0x3774ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B458u, 0x3774A8u, 0x3774B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3774B0u;
label_3774b0:
    // 0x3774b0: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x3774b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x3774b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3774b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774b8: 0x26105d20  addiu       $s0, $s0, 0x5D20
    ctx->pc = 0x3774b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23840));
    // 0x3774bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3774bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774c0: 0xc0ded20  jal         func_37B480
    ctx->pc = 0x3774C0u;
    SET_GPR_U32(ctx, 31, 0x3774C8u);
    ctx->pc = 0x3774C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3774C0u;
    // 0x3774c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B480u, 0x3774C0u, 0x3774C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3774C8u;
label_3774c8:
    // 0x3774c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3774c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774cc: 0xc0ded16  jal         func_37B458
    ctx->pc = 0x3774CCu;
    SET_GPR_U32(ctx, 31, 0x3774D4u);
    ctx->pc = 0x3774D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3774CCu;
    // 0x3774d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B458u, 0x3774CCu, 0x3774D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3774D4u;
label_3774d4:
    // 0x3774d4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3774d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3774d8: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3774d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3774dc: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x3774dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3774e0: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x3774e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3774e4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3774e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3774e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3774E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3774ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774E8u;
        // 0x3774ec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3774E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3774F0u;
}
