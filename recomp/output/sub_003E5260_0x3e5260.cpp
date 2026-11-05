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

// Function: sub_003E5260
// Address: 0x3e5260 - 0x3e5420
void sub_003E5260_0x3e5260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5260_0x3e5260");
#endif

    switch (ctx->pc) {
        case 0x3e52acu: goto label_3e52ac;
        case 0x3e52c0u: goto label_3e52c0;
        case 0x3e52d8u: goto label_3e52d8;
        case 0x3e52e4u: goto label_3e52e4;
        case 0x3e5328u: goto label_3e5328;
        case 0x3e53a0u: goto label_3e53a0;
        case 0x3e53b0u: goto label_3e53b0;
        case 0x3e53c0u: goto label_3e53c0;
        case 0x3e53ccu: goto label_3e53cc;
        default: break;
    }

    ctx->pc = 0x3e5260u;

    // 0x3e5260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e5260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e5264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e5264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e5268: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e526c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e526cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e5274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e5274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5278: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e527c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e527cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e5280: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e5280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e5284: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e5284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e5288: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e5288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e528c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e5290: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e5290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e5294: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5298: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5298u;
    {
        const bool branch_taken_0x3e5298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5298u;
        // 0x3e529c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5298) {
            ctx->pc = 0x3E5310u;
            goto label_3e5310;
        }
    }
    ctx->pc = 0x3E52A0u;
    // 0x3e52a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e52a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e52a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E52A4u;
    SET_GPR_U32(ctx, 31, 0x3E52ACu);
    ctx->pc = 0x3E52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52A4u;
    // 0x3e52a8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E52A4u, 0x3E52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52ACu;
label_3e52ac:
    // 0x3e52ac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e52acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e52b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e52b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52b4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e52b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e52b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E52B8u;
    SET_GPR_U32(ctx, 31, 0x3E52C0u);
    ctx->pc = 0x3E52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52B8u;
    // 0x3e52bc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E52B8u, 0x3E52C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52C0u;
label_3e52c0:
    // 0x3e52c0: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e52c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e52c4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e52c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E52C8u;
    {
        const bool branch_taken_0x3e52c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52C8u;
        // 0x3e52cc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e52c8) {
            ctx->pc = 0x3E52F0u;
            goto label_3e52f0;
        }
    }
    ctx->pc = 0x3E52D0u;
    // 0x3e52d0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e52d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e52d4: 0x0  nop
    ctx->pc = 0x3e52d4u;
    // NOP
label_3e52d8:
    // 0x3e52d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e52d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52dc: 0xc0afaaa  jal         func_2BEAA8
    ctx->pc = 0x3E52DCu;
    SET_GPR_U32(ctx, 31, 0x3E52E4u);
    ctx->pc = 0x3E52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52DCu;
    // 0x3e52e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEAA8u, 0x3E52DCu, 0x3E52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52E4u;
label_3e52e4:
    // 0x3e52e4: 0x0  nop
    ctx->pc = 0x3e52e4u;
    // NOP
    // 0x3e52e8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E52E8u;
    {
        const bool branch_taken_0x3e52e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52E8u;
        // 0x3e52ec: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e52e8) {
            ctx->pc = 0x3E52D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e52d8;
        }
    }
    ctx->pc = 0x3E52F0u;
label_3e52f0:
    // 0x3e52f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e52f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e52f4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e52f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52f8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e52f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e52fc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e52fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5300: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e5300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e5304: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e5304u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e5308: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E5308u;
    {
        const bool branch_taken_0x3e5308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5308u;
        // 0x3e530c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5308) {
            ctx->pc = 0x3E53F8u;
            goto label_3e53f8;
        }
    }
    ctx->pc = 0x3E5310u;
label_3e5310:
    // 0x3e5310: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e5310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5314: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E5314u;
    {
        const bool branch_taken_0x3e5314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5314u;
        // 0x3e5318: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5314) {
            ctx->pc = 0x3E5394u;
            goto label_3e5394;
        }
    }
    ctx->pc = 0x3E531Cu;
    // 0x3e531c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5320: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e5320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e5324: 0x0  nop
    ctx->pc = 0x3e5324u;
    // NOP
label_3e5328:
    // 0x3e5328: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e5328u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e532c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e5330: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e5330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e5334: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E5334u;
    {
        const bool branch_taken_0x3e5334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5334) {
            ctx->pc = 0x3E5338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5334u;
            // 0x3e5338: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5388u;
            goto label_3e5388;
        }
    }
    ctx->pc = 0x3E533Cu;
    // 0x3e533c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E533Cu;
    {
        const bool branch_taken_0x3e533c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e533c) {
            ctx->pc = 0x3E5340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E533Cu;
            // 0x3e5340: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5368u;
            goto label_3e5368;
        }
    }
    ctx->pc = 0x3E5344u;
    // 0x3e5344: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5344u;
    {
        const bool branch_taken_0x3e5344 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5344u;
        // 0x3e5348: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5344) {
            ctx->pc = 0x3E5354u;
            goto label_3e5354;
        }
    }
    ctx->pc = 0x3E534Cu;
    // 0x3e534c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E534Cu;
    {
        const bool branch_taken_0x3e534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E534Cu;
        // 0x3e5350: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e534c) {
            ctx->pc = 0x3E5358u;
            goto label_3e5358;
        }
    }
    ctx->pc = 0x3E5354u;
label_3e5354:
    // 0x3e5354: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e5354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e5358:
    // 0x3e5358: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e535c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e535cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e5360: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e5360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e5364: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e5364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e5368:
    // 0x3e5368: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e5368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e536c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5370: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e5370u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e5374: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e5374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e5378: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e5378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e537c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e537cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e5380: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5380u;
    {
        const bool branch_taken_0x3e5380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5380u;
        // 0x3e5384: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5380) {
            ctx->pc = 0x3E53F8u;
            goto label_3e53f8;
        }
    }
    ctx->pc = 0x3E5388u;
label_3e5388:
    // 0x3e5388: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e5388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e538c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E538Cu;
    {
        const bool branch_taken_0x3e538c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e538c) {
            ctx->pc = 0x3E5390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E538Cu;
            // 0x3e5390: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5328;
        }
    }
    ctx->pc = 0x3E5394u;
label_3e5394:
    // 0x3e5394: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5398: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5398u;
    SET_GPR_U32(ctx, 31, 0x3E53A0u);
    ctx->pc = 0x3E539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5398u;
    // 0x3e539c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5398u, 0x3E53A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E53A0u;
label_3e53a0:
    // 0x3e53a0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e53a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e53a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e53a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e53a8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E53A8u;
    SET_GPR_U32(ctx, 31, 0x3E53B0u);
    ctx->pc = 0x3E53ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E53A8u;
    // 0x3e53ac: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E53A8u, 0x3E53B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E53B0u;
label_3e53b0:
    // 0x3e53b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e53b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e53b4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e53b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e53b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e53b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e53bc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e53bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e53c0:
    // 0x3e53c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e53c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e53c4: 0xc0afaaa  jal         func_2BEAA8
    ctx->pc = 0x3E53C4u;
    SET_GPR_U32(ctx, 31, 0x3E53CCu);
    ctx->pc = 0x3E53C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E53C4u;
    // 0x3e53c8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEAA8u, 0x3E53C4u, 0x3E53CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E53CCu;
label_3e53cc:
    // 0x3e53cc: 0x0  nop
    ctx->pc = 0x3e53ccu;
    // NOP
    // 0x3e53d0: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E53D0u;
    {
        const bool branch_taken_0x3e53d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E53D0u;
        // 0x3e53d4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e53d0) {
            ctx->pc = 0x3E53C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e53c0;
        }
    }
    ctx->pc = 0x3E53D8u;
    // 0x3e53d8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e53dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e53e0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e53e4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e53e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e53e8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e53e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e53ec: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e53ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e53f0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e53f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e53f4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e53f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e53f8:
    // 0x3e53f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e53f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e53fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e53fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e5400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e5400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5404: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e5404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e5408: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e5408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e540c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e540cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e5410: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e5410u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5414: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e5414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e5418: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5418u;
        // 0x3e541c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5420u;
}
