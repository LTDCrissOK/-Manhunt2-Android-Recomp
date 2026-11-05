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

// Function: sub_003E5420
// Address: 0x3e5420 - 0x3e55e0
void sub_003E5420_0x3e5420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5420_0x3e5420");
#endif

    switch (ctx->pc) {
        case 0x3e546cu: goto label_3e546c;
        case 0x3e5480u: goto label_3e5480;
        case 0x3e5498u: goto label_3e5498;
        case 0x3e54a4u: goto label_3e54a4;
        case 0x3e54e8u: goto label_3e54e8;
        case 0x3e5560u: goto label_3e5560;
        case 0x3e5570u: goto label_3e5570;
        case 0x3e5580u: goto label_3e5580;
        case 0x3e558cu: goto label_3e558c;
        default: break;
    }

    ctx->pc = 0x3e5420u;

    // 0x3e5420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e5420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e5424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e5428: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e5428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e542c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e542cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e5430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e5434: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e5434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e5438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e543c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e543cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e5440: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e5440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e5444: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e5444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e5448: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e5448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e544c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e5450: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e5450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e5454: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5458: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5458u;
    {
        const bool branch_taken_0x3e5458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5458u;
        // 0x3e545c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5458) {
            ctx->pc = 0x3E54D0u;
            goto label_3e54d0;
        }
    }
    ctx->pc = 0x3E5460u;
    // 0x3e5460: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5464: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5464u;
    SET_GPR_U32(ctx, 31, 0x3E546Cu);
    ctx->pc = 0x3E5468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5464u;
    // 0x3e5468: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5464u, 0x3E546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E546Cu;
label_3e546c:
    // 0x3e546c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e546cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5470: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e5470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5474: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e5474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e5478: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5478u;
    SET_GPR_U32(ctx, 31, 0x3E5480u);
    ctx->pc = 0x3E547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5478u;
    // 0x3e547c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5478u, 0x3E5480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5480u;
label_3e5480:
    // 0x3e5480: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e5480u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5484: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e5484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e5488: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E5488u;
    {
        const bool branch_taken_0x3e5488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5488u;
        // 0x3e548c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5488) {
            ctx->pc = 0x3E54B0u;
            goto label_3e54b0;
        }
    }
    ctx->pc = 0x3E5490u;
    // 0x3e5490: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5490u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5494: 0x0  nop
    ctx->pc = 0x3e5494u;
    // NOP
label_3e5498:
    // 0x3e5498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e549c: 0xc0afad2  jal         func_2BEB48
    ctx->pc = 0x3E549Cu;
    SET_GPR_U32(ctx, 31, 0x3E54A4u);
    ctx->pc = 0x3E54A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E549Cu;
    // 0x3e54a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEB48u, 0x3E549Cu, 0x3E54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E54A4u;
label_3e54a4:
    // 0x3e54a4: 0x0  nop
    ctx->pc = 0x3e54a4u;
    // NOP
    // 0x3e54a8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E54A8u;
    {
        const bool branch_taken_0x3e54a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54A8u;
        // 0x3e54ac: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54a8) {
            ctx->pc = 0x3E5498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5498;
        }
    }
    ctx->pc = 0x3E54B0u;
label_3e54b0:
    // 0x3e54b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e54b4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e54b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e54b8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e54bc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e54bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e54c0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e54c4: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e54c8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E54C8u;
    {
        const bool branch_taken_0x3e54c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E54CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54C8u;
        // 0x3e54cc: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54c8) {
            ctx->pc = 0x3E55B8u;
            goto label_3e55b8;
        }
    }
    ctx->pc = 0x3E54D0u;
label_3e54d0:
    // 0x3e54d0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e54d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e54d4: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E54D4u;
    {
        const bool branch_taken_0x3e54d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E54D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54D4u;
        // 0x3e54d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54d4) {
            ctx->pc = 0x3E5554u;
            goto label_3e5554;
        }
    }
    ctx->pc = 0x3E54DCu;
    // 0x3e54dc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e54dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e54e0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e54e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e54e4: 0x0  nop
    ctx->pc = 0x3e54e4u;
    // NOP
label_3e54e8:
    // 0x3e54e8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e54e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e54ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e54f0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e54f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e54f4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E54F4u;
    {
        const bool branch_taken_0x3e54f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e54f4) {
            ctx->pc = 0x3E54F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E54F4u;
            // 0x3e54f8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5548u;
            goto label_3e5548;
        }
    }
    ctx->pc = 0x3E54FCu;
    // 0x3e54fc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E54FCu;
    {
        const bool branch_taken_0x3e54fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e54fc) {
            ctx->pc = 0x3E5500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E54FCu;
            // 0x3e5500: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5528u;
            goto label_3e5528;
        }
    }
    ctx->pc = 0x3E5504u;
    // 0x3e5504: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5504u;
    {
        const bool branch_taken_0x3e5504 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5504u;
        // 0x3e5508: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5504) {
            ctx->pc = 0x3E5514u;
            goto label_3e5514;
        }
    }
    ctx->pc = 0x3E550Cu;
    // 0x3e550c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E550Cu;
    {
        const bool branch_taken_0x3e550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E550Cu;
        // 0x3e5510: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e550c) {
            ctx->pc = 0x3E5518u;
            goto label_3e5518;
        }
    }
    ctx->pc = 0x3E5514u;
label_3e5514:
    // 0x3e5514: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e5514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e5518:
    // 0x3e5518: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e551c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e551cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e5520: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e5520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e5524: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e5524u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e5528:
    // 0x3e5528: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e5528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e552c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5530: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e5530u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e5534: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e5534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e5538: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e5538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e553c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e553cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e5540: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5540u;
    {
        const bool branch_taken_0x3e5540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5540u;
        // 0x3e5544: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5540) {
            ctx->pc = 0x3E55B8u;
            goto label_3e55b8;
        }
    }
    ctx->pc = 0x3E5548u;
label_3e5548:
    // 0x3e5548: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e5548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e554c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E554Cu;
    {
        const bool branch_taken_0x3e554c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e554c) {
            ctx->pc = 0x3E5550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E554Cu;
            // 0x3e5550: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E54E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e54e8;
        }
    }
    ctx->pc = 0x3E5554u;
label_3e5554:
    // 0x3e5554: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5558: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5558u;
    SET_GPR_U32(ctx, 31, 0x3E5560u);
    ctx->pc = 0x3E555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5558u;
    // 0x3e555c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5558u, 0x3E5560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5560u;
label_3e5560:
    // 0x3e5560: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5560u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5564: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e5564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5568: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5568u;
    SET_GPR_U32(ctx, 31, 0x3E5570u);
    ctx->pc = 0x3E556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5568u;
    // 0x3e556c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5568u, 0x3E5570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5570u;
label_3e5570:
    // 0x3e5570: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5574: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e5574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5578: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e5578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e557c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e557cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e5580:
    // 0x3e5580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5584: 0xc0afad2  jal         func_2BEB48
    ctx->pc = 0x3E5584u;
    SET_GPR_U32(ctx, 31, 0x3E558Cu);
    ctx->pc = 0x3E5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5584u;
    // 0x3e5588: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEB48u, 0x3E5584u, 0x3E558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E558Cu;
label_3e558c:
    // 0x3e558c: 0x0  nop
    ctx->pc = 0x3e558cu;
    // NOP
    // 0x3e5590: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5590u;
    {
        const bool branch_taken_0x3e5590 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5590u;
        // 0x3e5594: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5590) {
            ctx->pc = 0x3E5580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5580;
        }
    }
    ctx->pc = 0x3E5598u;
    // 0x3e5598: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e5598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e559c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e55a0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e55a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e55a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e55a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e55a8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e55a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e55ac: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e55acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e55b0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e55b4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e55b8:
    // 0x3e55b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e55b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e55bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e55bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e55c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e55c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e55c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e55c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e55c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e55c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e55cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e55ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e55d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e55d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e55d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e55d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e55d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E55D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55D8u;
        // 0x3e55dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E55D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E55E0u;
}
