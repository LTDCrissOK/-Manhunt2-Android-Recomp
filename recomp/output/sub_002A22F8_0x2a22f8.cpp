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

// Function: sub_002A22F8
// Address: 0x2a22f8 - 0x2a2428
void sub_002A22F8_0x2a22f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A22F8_0x2a22f8");
#endif

    switch (ctx->pc) {
        case 0x2a2330u: goto label_2a2330;
        case 0x2a233cu: goto label_2a233c;
        case 0x2a23b0u: goto label_2a23b0;
        case 0x2a23b8u: goto label_2a23b8;
        case 0x2a2404u: goto label_2a2404;
        default: break;
    }

    ctx->pc = 0x2a22f8u;

    // 0x2a22f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a22f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a22fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2a2300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a2304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a2308: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a2308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a230c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a2310: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a2310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2314: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a2314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a2318: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a2318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a231c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a2320: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a2320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2324: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2a2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2a2328: 0xc0db198  jal         func_36C660
    ctx->pc = 0x2A2328u;
    SET_GPR_U32(ctx, 31, 0x2A2330u);
    ctx->pc = 0x2A232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2328u;
    // 0x2a232c: 0x2454ac50  addiu       $s4, $v0, -0x53B0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x2A2328u, 0x2A2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2330u;
label_2a2330:
    // 0x2a2330: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a2334: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x2A2334u;
    SET_GPR_U32(ctx, 31, 0x2A233Cu);
    ctx->pc = 0x2A2338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2334u;
    // 0x2a2338: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x2A2334u, 0x2A233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A233Cu;
label_2a233c:
    // 0x2a233c: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x2a233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2344: 0xc66e0014  lwc1        $f14, 0x14($s3)
    ctx->pc = 0x2a2344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a2348: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a2348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a234c: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x2a234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2350: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a2350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2354: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x2a2354u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2a2358: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2a2358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a235c: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x2a235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a2360: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x2a2360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2a2364: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2a2364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2a2368: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a2368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a236c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a236cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2370: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a2370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2374: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2a2374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2a2378: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a2378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2a237c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a237cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a2380: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x2a2380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x2a2384: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2a2384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2a2388: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a2388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a238c: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x2a238cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x2a2390: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x2a2390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
    // 0x2a2394: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2a2394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2a2398: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2a2398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2a239c: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x2a239cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x2a23a0: 0x460d0b41  sub.s       $f13, $f1, $f13
    ctx->pc = 0x2a23a0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x2a23a4: 0x8e680054  lw          $t0, 0x54($s3)
    ctx->pc = 0x2a23a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2a23a8: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2A23A8u;
    SET_GPR_U32(ctx, 31, 0x2A23B0u);
    ctx->pc = 0x2A23ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A23A8u;
    // 0x2a23ac: 0x460f1bc0  add.s       $f15, $f3, $f15 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[3], ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2A23A8u, 0x2A23B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23B0u;
label_2a23b0:
    // 0x2a23b0: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x2A23B0u;
    SET_GPR_U32(ctx, 31, 0x2A23B8u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x2A23B0u, 0x2A23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23B8u;
label_2a23b8:
    // 0x2a23b8: 0x8e680058  lw          $t0, 0x58($s3)
    ctx->pc = 0x2a23b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2a23bc: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A23BCu;
    {
        const bool branch_taken_0x2a23bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23BCu;
        // 0x2a23c0: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23bc) {
            ctx->pc = 0x2A2404u;
            goto label_2a2404;
        }
    }
    ctx->pc = 0x2A23C4u;
    // 0x2a23c4: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x2a23c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a23c8: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2a23c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2a23cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a23ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2a23d0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2a23d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2a23d4: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2a23d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2a23d8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2a23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a23dc: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x2a23dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2a23e0: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x2a23e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a23e4: 0x460f6302  mul.s       $f12, $f12, $f15
    ctx->pc = 0x2a23e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
    // 0x2a23e8: 0xc66d0010  lwc1        $f13, 0x10($s3)
    ctx->pc = 0x2a23e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a23ec: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a23ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a23f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a23f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a23f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a23f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a23f8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a23f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a23fc: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2A23FCu;
    SET_GPR_U32(ctx, 31, 0x2A2404u);
    ctx->pc = 0x2A2400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A23FCu;
    // 0x2a2400: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2A23FCu, 0x2A2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2404u;
label_2a2404:
    // 0x2a2404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a2408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a240c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a240cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2410: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a2410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a2414: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a2414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2418: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a2418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a241c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A241Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A241Cu;
        // 0x2a2420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A241Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2424u;
    // 0x2a2424: 0x0  nop
    ctx->pc = 0x2a2424u;
    // NOP
    ctx->pc = 0x2a2428u;
}
