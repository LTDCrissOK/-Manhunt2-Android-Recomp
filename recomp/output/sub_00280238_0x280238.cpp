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

// Function: sub_00280238
// Address: 0x280238 - 0x280478
void sub_00280238_0x280238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280238_0x280238");
#endif

    switch (ctx->pc) {
        case 0x280280u: goto label_280280;
        case 0x2802c8u: goto label_2802c8;
        case 0x2802e0u: goto label_2802e0;
        case 0x28030cu: goto label_28030c;
        case 0x280330u: goto label_280330;
        case 0x280344u: goto label_280344;
        case 0x280360u: goto label_280360;
        case 0x280388u: goto label_280388;
        case 0x28039cu: goto label_28039c;
        case 0x2803c0u: goto label_2803c0;
        case 0x2803d0u: goto label_2803d0;
        case 0x2803ecu: goto label_2803ec;
        case 0x28040cu: goto label_28040c;
        case 0x280420u: goto label_280420;
        case 0x280440u: goto label_280440;
        default: break;
    }

    ctx->pc = 0x280238u;

    // 0x280238: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x280238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28023c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28023cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x280240: 0x8c43cb4c  lw          $v1, -0x34B4($v0)
    ctx->pc = 0x280240u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CB4Cu));
    // 0x280244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x280244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x280248: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x280248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28024c: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x28024cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x280250: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x280250u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x280254: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x280254u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x280258: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x280258u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28025c: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x28025cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x280260: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x280260u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x280264: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x280264u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x280268: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x280268u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28026c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x28026cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x280270: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x280270u;
    {
        const bool branch_taken_0x280270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280270u;
        // 0x280274: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280270) {
            ctx->pc = 0x280440u;
            goto label_280440;
        }
    }
    ctx->pc = 0x280278u;
    // 0x280278: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x280278u;
    SET_GPR_U32(ctx, 31, 0x280280u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x280278u, 0x280280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280280u;
label_280280:
    // 0x280280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280284: 0x1443006f  bne         $v0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x280284u;
    {
        const bool branch_taken_0x280284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x280288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280284u;
        // 0x280288: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280284) {
            ctx->pc = 0x280444u;
            goto label_280444;
        }
    }
    ctx->pc = 0x28028Cu;
    // 0x28028c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28028cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x280290: 0x8c62a340  lw          $v0, -0x5CC0($v1)
    ctx->pc = 0x280290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA340u));
    // 0x280294: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x280294u;
    {
        const bool branch_taken_0x280294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280294u;
        // 0x280298: 0x2470a340  addiu       $s0, $v1, -0x5CC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280294) {
            ctx->pc = 0x280440u;
            goto label_280440;
        }
    }
    ctx->pc = 0x28029Cu;
    // 0x28029c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x28029cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2802a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2802a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2802a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2802a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2802a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2802a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2802ac: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x2802acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x2802b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2802b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2802b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2802b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2802b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2802b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2802bc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2802bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2802c0: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x2802C0u;
    SET_GPR_U32(ctx, 31, 0x2802C8u);
    ctx->pc = 0x2802C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2802C0u;
    // 0x2802c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x2802C0u, 0x2802C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802C8u;
label_2802c8:
    // 0x2802c8: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x2802c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2802cc: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x2802ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x2802d0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2802d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2802d4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2802d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2802d8: 0xc0f8134  jal         func_3E04D0
    ctx->pc = 0x2802D8u;
    SET_GPR_U32(ctx, 31, 0x2802E0u);
    ctx->pc = 0x2802DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2802D8u;
    // 0x2802dc: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E04D0u, 0x2802D8u, 0x2802E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802E0u;
label_2802e0:
    // 0x2802e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2802e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2802e4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2802e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2802e8: 0x3c01bb44  lui         $at, 0xBB44
    ctx->pc = 0x2802e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47940 << 16));
    // 0x2802ec: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x2802ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x2802f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2802f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2802f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2802f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2802f8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2802f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2802fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2802fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280300: 0x46010682  mul.s       $f26, $f0, $f1
    ctx->pc = 0x280300u;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x280304: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x280304u;
    SET_GPR_U32(ctx, 31, 0x28030Cu);
    ctx->pc = 0x280308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280304u;
    // 0x280308: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x280304u, 0x28030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28030Cu;
label_28030c:
    // 0x28030c: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x28030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x280310: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x280310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x280314: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x280314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x280318: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x280318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28031c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28031cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x280320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280324: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x280324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x280328: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x280328u;
    SET_GPR_U32(ctx, 31, 0x280330u);
    ctx->pc = 0x28032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280328u;
    // 0x28032c: 0x24a59f98  addiu       $a1, $a1, -0x6068 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x280328u, 0x280330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280330u;
label_280330:
    // 0x280330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280334: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x280334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x280338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28033c: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x28033Cu;
    SET_GPR_U32(ctx, 31, 0x280344u);
    ctx->pc = 0x280340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28033Cu;
    // 0x280340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x28033Cu, 0x280344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280344u;
label_280344:
    // 0x280344: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x280344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x280348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28034c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28034cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x280350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x280350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280358: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x280358u;
    SET_GPR_U32(ctx, 31, 0x280360u);
    ctx->pc = 0x28035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280358u;
    // 0x28035c: 0x4600b741  sub.s       $f29, $f22, $f0 (Delay Slot)
    ctx->f[29] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x280358u, 0x280360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280360u;
label_280360:
    // 0x280360: 0x3c013d81  lui         $at, 0x3D81
    ctx->pc = 0x280360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15745 << 16));
    // 0x280364: 0x34210625  ori         $at, $at, 0x625
    ctx->pc = 0x280364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1573);
    // 0x280368: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x280368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28036c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x28036cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x280370: 0x461aeb00  add.s       $f12, $f29, $f26
    ctx->pc = 0x280370u;
    ctx->f[12] = FPU_ADD_S(ctx->f[29], ctx->f[26]);
    // 0x280374: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x280374u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x280378: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x280378u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x28037c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280380: 0xc09f662  jal         func_27D988
    ctx->pc = 0x280380u;
    SET_GPR_U32(ctx, 31, 0x280388u);
    ctx->pc = 0x280384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280380u;
    // 0x280384: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x280380u, 0x280388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280388u;
label_280388:
    // 0x280388: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x280388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x28038c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28038cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x280390: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x280390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x280394: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x280394u;
    SET_GPR_U32(ctx, 31, 0x28039Cu);
    ctx->pc = 0x280398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280394u;
    // 0x280398: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x280394u, 0x28039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28039Cu;
label_28039c:
    // 0x28039c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x28039cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2803a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2803a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2803a4: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x2803a4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x2803a8: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x2803a8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x2803ac: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x2803acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x2803b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2803b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2803b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2803b8: 0xc09f662  jal         func_27D988
    ctx->pc = 0x2803B8u;
    SET_GPR_U32(ctx, 31, 0x2803C0u);
    ctx->pc = 0x2803BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803B8u;
    // 0x2803bc: 0x4617ddc0  add.s       $f23, $f27, $f23 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[27], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x2803B8u, 0x2803C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803C0u;
label_2803c0:
    // 0x2803c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2803c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803c4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x2803c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x2803c8: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x2803C8u;
    SET_GPR_U32(ctx, 31, 0x2803D0u);
    ctx->pc = 0x2803CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803C8u;
    // 0x2803cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x2803C8u, 0x2803D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803D0u;
label_2803d0:
    // 0x2803d0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2803d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2803d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2803d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803d8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2803d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2803dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2803dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2803e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803e4: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x2803E4u;
    SET_GPR_U32(ctx, 31, 0x2803ECu);
    ctx->pc = 0x2803E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803E4u;
    // 0x2803e8: 0x4600b741  sub.s       $f29, $f22, $f0 (Delay Slot)
    ctx->f[29] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2803E4u, 0x2803ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803ECu;
label_2803ec:
    // 0x2803ec: 0x461cbb40  add.s       $f13, $f23, $f28
    ctx->pc = 0x2803ecu;
    ctx->f[13] = FPU_ADD_S(ctx->f[23], ctx->f[28]);
    // 0x2803f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2803f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803f4: 0x461aeb00  add.s       $f12, $f29, $f26
    ctx->pc = 0x2803f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[29], ctx->f[26]);
    // 0x2803f8: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x2803f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x2803fc: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2803fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x280400: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x280400u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x280404: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x280404u;
    SET_GPR_U32(ctx, 31, 0x28040Cu);
    ctx->pc = 0x280408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280404u;
    // 0x280408: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x280404u, 0x28040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28040Cu;
label_28040c:
    // 0x28040c: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x28040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x280410: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x280410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x280414: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x280414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x280418: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x280418u;
    SET_GPR_U32(ctx, 31, 0x280420u);
    ctx->pc = 0x28041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280418u;
    // 0x28041c: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x280418u, 0x280420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280420u;
label_280420:
    // 0x280420: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x280420u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x280424: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x280424u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x280428: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x280428u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x28042c: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x28042cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x280430: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280434: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x280434u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x280438: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x280438u;
    SET_GPR_U32(ctx, 31, 0x280440u);
    ctx->pc = 0x28043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280438u;
    // 0x28043c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x280438u, 0x280440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280440u;
label_280440:
    // 0x280440: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x280440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_280444:
    // 0x280444: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x280444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x280448: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x280448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x28044c: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x28044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x280450: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x280450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x280454: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x280454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x280458: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x280458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x28045c: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x28045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x280460: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x280460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x280464: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x280464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x280468: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x280468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28046c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x28046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280470: 0x3e00008  jr          $ra
    ctx->pc = 0x280470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280470u;
        // 0x280474: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280478u;
}
