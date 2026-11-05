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

// Function: sub_001F5458
// Address: 0x1f5458 - 0x1f56a0
void sub_001F5458_0x1f5458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5458_0x1f5458");
#endif

    switch (ctx->pc) {
        case 0x1f54e8u: goto label_1f54e8;
        case 0x1f5534u: goto label_1f5534;
        case 0x1f5560u: goto label_1f5560;
        case 0x1f5588u: goto label_1f5588;
        case 0x1f55b0u: goto label_1f55b0;
        case 0x1f55d0u: goto label_1f55d0;
        case 0x1f55e8u: goto label_1f55e8;
        case 0x1f55f4u: goto label_1f55f4;
        case 0x1f5654u: goto label_1f5654;
        default: break;
    }

    ctx->pc = 0x1f5458u;

    // 0x1f5458: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1f5458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f545c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f545cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f5460: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x1f5460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f5464: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1f5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1f5468: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f5468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f546c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f546cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5470: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1f5470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1f5474: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1f5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1f5478: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1f5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1f547c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1f547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f5480: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f5484: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1f5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1f5488: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1f5488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1f548c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1f548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1f5490: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1f5490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f5494: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1f5494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1f5498: 0x8c554f94  lw          $s5, 0x4F94($v0)
    ctx->pc = 0x1f5498u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1f549c: 0x12a00073  beqz        $s5, . + 4 + (0x73 << 2)
    ctx->pc = 0x1F549Cu;
    {
        const bool branch_taken_0x1f549c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F549Cu;
        // 0x1f54a0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f549c) {
            ctx->pc = 0x1F566Cu;
            goto label_1f566c;
        }
    }
    ctx->pc = 0x1F54A4u;
    // 0x1f54a4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1f54a8: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x1f54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x1f54ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f54acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f54b0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1f54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1f54b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f54b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f54b8: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1f54b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f54bc: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1f54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f54c0: 0x90624fb8  lbu         $v0, 0x4FB8($v1)
    ctx->pc = 0x1f54c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20408)));
    // 0x1f54c4: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1F54C4u;
    {
        const bool branch_taken_0x1f54c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54C4u;
        // 0x1f54c8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54c4) {
            ctx->pc = 0x1F5668u;
            goto label_1f5668;
        }
    }
    ctx->pc = 0x1F54CCu;
    // 0x1f54cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f54ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54d0: 0x12e00065  beqz        $s7, . + 4 + (0x65 << 2)
    ctx->pc = 0x1F54D0u;
    {
        const bool branch_taken_0x1f54d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54D0u;
        // 0x1f54d4: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54d0) {
            ctx->pc = 0x1F5668u;
            goto label_1f5668;
        }
    }
    ctx->pc = 0x1F54D8u;
    // 0x1f54d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f54d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54dc: 0x26364fa8  addiu       $s6, $s1, 0x4FA8
    ctx->pc = 0x1f54dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 20392));
    // 0x1f54e0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1f54e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f54e4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1f54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1f54e8:
    // 0x1f54e8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f54ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f54f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f54f4: 0x94444fa0  lhu         $a0, 0x4FA0($v0)
    ctx->pc = 0x1f54f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20384)));
    // 0x1f54f8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F54F8u;
    {
        const bool branch_taken_0x1f54f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54F8u;
        // 0x1f54fc: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54f8) {
            ctx->pc = 0x1F5510u;
            goto label_1f5510;
        }
    }
    ctx->pc = 0x1F5500u;
    // 0x1f5500: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F5500u;
    {
        const bool branch_taken_0x1f5500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5500u;
        // 0x1f5504: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5500) {
            ctx->pc = 0x1F553Cu;
            goto label_1f553c;
        }
    }
    ctx->pc = 0x1F5508u;
    // 0x1f5508: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1F5508u;
    {
        const bool branch_taken_0x1f5508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5508u;
        // 0x1f550c: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5508) {
            ctx->pc = 0x1F565Cu;
            goto label_1f565c;
        }
    }
    ctx->pc = 0x1F5510u;
label_1f5510:
    // 0x1f5510: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1f5510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1f5514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5518: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f5518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f551c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f551cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5520: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f5520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f5524: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f5524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5528: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1f5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f552c: 0xc07d4f6  jal         func_1F53D8
    ctx->pc = 0x1F552Cu;
    SET_GPR_U32(ctx, 31, 0x1F5534u);
    ctx->pc = 0x1F5530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F552Cu;
    // 0x1f5530: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F53D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F53D8u, 0x1F552Cu, 0x1F5534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5534u;
label_1f5534:
    // 0x1f5534: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F5534u;
    {
        const bool branch_taken_0x1f5534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5534) {
            ctx->pc = 0x1F5560u;
            goto label_1f5560;
        }
    }
    ctx->pc = 0x1F553Cu;
label_1f553c:
    // 0x1f553c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1f553cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1f5540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5544: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f5544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f5548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f554c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f5550: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f5550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5554: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1f5554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5558: 0xc07d500  jal         func_1F5400
    ctx->pc = 0x1F5558u;
    SET_GPR_U32(ctx, 31, 0x1F5560u);
    ctx->pc = 0x1F555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5558u;
    // 0x1f555c: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5400u, 0x1F5558u, 0x1F5560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5560u;
label_1f5560:
    // 0x1f5560: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F5560u;
    {
        const bool branch_taken_0x1f5560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5560u;
        // 0x1f5564: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5560) {
            ctx->pc = 0x1F5654u;
            goto label_1f5654;
        }
    }
    ctx->pc = 0x1F5568u;
    // 0x1f5568: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f556c: 0xa22200fc  sb          $v0, 0xFC($s1)
    ctx->pc = 0x1f556cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5570: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f5570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f5574: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1f5574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1f5578: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f5578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f557c: 0x24449c38  addiu       $a0, $v0, -0x63C8
    ctx->pc = 0x1f557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941752));
    // 0x1f5580: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F5580u;
    SET_GPR_U32(ctx, 31, 0x1F5588u);
    ctx->pc = 0x1F5584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5580u;
    // 0x1f5584: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F5580u, 0x1F5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5588u;
label_1f5588:
    // 0x1f5588: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x1f5588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1f558c: 0x93a30029  lbu         $v1, 0x29($sp)
    ctx->pc = 0x1f558cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f5590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5594: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f5594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5598: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f5598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f559c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1f559cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f55a0: 0x0  nop
    ctx->pc = 0x1f55a0u;
    // NOP
    // 0x1f55a4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1f55a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1f55a8: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F55A8u;
    SET_GPR_U32(ctx, 31, 0x1F55B0u);
    ctx->pc = 0x1F55ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55A8u;
    // 0x1f55ac: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F55A8u, 0x1F55B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55B0u;
label_1f55b0:
    // 0x1f55b0: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x1f55b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1f55b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f55b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f55b8: 0x0  nop
    ctx->pc = 0x1f55b8u;
    // NOP
    // 0x1f55bc: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1F55BCu;
    {
        const bool branch_taken_0x1f55bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55BCu;
        // 0x1f55c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55bc) {
            ctx->pc = 0x1F5654u;
            goto label_1f5654;
        }
    }
    ctx->pc = 0x1F55C4u;
    // 0x1f55c4: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x1f55c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1f55c8: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F55C8u;
    SET_GPR_U32(ctx, 31, 0x1F55D0u);
    ctx->pc = 0x1F55CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55C8u;
    // 0x1f55cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F55C8u, 0x1F55D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55D0u;
label_1f55d0:
    // 0x1f55d0: 0x93b00028  lbu         $s0, 0x28($sp)
    ctx->pc = 0x1f55d0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f55d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f55d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55d8: 0xc62d0110  lwc1        $f13, 0x110($s1)
    ctx->pc = 0x1f55d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f55dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f55dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f55e0: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F55E0u;
    SET_GPR_U32(ctx, 31, 0x1F55E8u);
    ctx->pc = 0x1F55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55E0u;
    // 0x1f55e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F55E0u, 0x1F55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55E8u;
label_1f55e8:
    // 0x1f55e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f55e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55ec: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1F55ECu;
    SET_GPR_U32(ctx, 31, 0x1F55F4u);
    ctx->pc = 0x1F55F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55ECu;
    // 0x1f55f0: 0xa222010c  sb          $v0, 0x10C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F55ECu, 0x1F55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55F4u;
label_1f55f4:
    // 0x1f55f4: 0x9222010c  lbu         $v0, 0x10C($s1)
    ctx->pc = 0x1f55f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1f55f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f55fc: 0xa230011c  sb          $s0, 0x11C($s1)
    ctx->pc = 0x1f55fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 16));
    // 0x1f5600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f5604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5608: 0x0  nop
    ctx->pc = 0x1f5608u;
    // NOP
    // 0x1f560c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f560cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f5610: 0xe6340120  swc1        $f20, 0x120($s1)
    ctx->pc = 0x1f5610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x1f5614: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x1f5614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x1f5618: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1f5618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1f561c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f561cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f5620: 0xae3e0114  sw          $fp, 0x114($s1)
    ctx->pc = 0x1f5620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 30));
    // 0x1f5624: 0xae3e0140  sw          $fp, 0x140($s1)
    ctx->pc = 0x1f5624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 30));
    // 0x1f5628: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x1f5628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x1f562c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f562cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1f5630: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1f5630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f5634: 0xae3e0124  sw          $fp, 0x124($s1)
    ctx->pc = 0x1f5634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 30));
    // 0x1f5638: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x1f5638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x1f563c: 0xa2200148  sb          $zero, 0x148($s1)
    ctx->pc = 0x1f563cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5640: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x1f5640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
    // 0x1f5644: 0xa2230170  sb          $v1, 0x170($s1)
    ctx->pc = 0x1f5644u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5648: 0xa222010c  sb          $v0, 0x10C($s1)
    ctx->pc = 0x1f5648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f564c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F564Cu;
    SET_GPR_U32(ctx, 31, 0x1F5654u);
    ctx->pc = 0x1F5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F564Cu;
    // 0x1f5650: 0xe620016c  swc1        $f0, 0x16C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F564Cu, 0x1F5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5654u;
label_1f5654:
    // 0x1f5654: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1f5654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f5658: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1f5658u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f565c:
    // 0x1f565c: 0x277182b  sltu        $v1, $s3, $s7
    ctx->pc = 0x1f565cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1f5660: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1F5660u;
    {
        const bool branch_taken_0x1f5660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5660u;
        // 0x1f5664: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5660) {
            ctx->pc = 0x1F54E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f54e8;
        }
    }
    ctx->pc = 0x1F5668u;
label_1f5668:
    // 0x1f5668: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f5668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f566c:
    // 0x1f566c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1f566cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5670: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1f5670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5674: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1f5674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5678: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1f5678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f567c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1f567cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f5680: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f5680u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f5684: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1f5684u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f5688: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1f5688u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f568c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1f568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1f5690: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1f5690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5694: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5694u;
        // 0x1f5698: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F569Cu;
    // 0x1f569c: 0x0  nop
    ctx->pc = 0x1f569cu;
    // NOP
    ctx->pc = 0x1f56a0u;
}
