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

// Function: sub_001D8468
// Address: 0x1d8468 - 0x1d88e0
void sub_001D8468_0x1d8468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8468_0x1d8468");
#endif

    switch (ctx->pc) {
        case 0x1d84acu: goto label_1d84ac;
        case 0x1d84c8u: goto label_1d84c8;
        case 0x1d84f8u: goto label_1d84f8;
        case 0x1d856cu: goto label_1d856c;
        case 0x1d85e4u: goto label_1d85e4;
        case 0x1d8624u: goto label_1d8624;
        case 0x1d86b8u: goto label_1d86b8;
        case 0x1d86f4u: goto label_1d86f4;
        case 0x1d87b8u: goto label_1d87b8;
        case 0x1d87c0u: goto label_1d87c0;
        case 0x1d87e4u: goto label_1d87e4;
        case 0x1d8818u: goto label_1d8818;
        case 0x1d8820u: goto label_1d8820;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d88a0u: goto label_1d88a0;
        default: break;
    }

    ctx->pc = 0x1d8468u;

    // 0x1d8468: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d8468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d846c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1d846cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1d8470: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1d8470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1d8474: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d8474u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8478: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1d8478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x1d847c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d847cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8480: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1d8480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1d8484: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1d8484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1d8488: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1d8488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1d848c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1d848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1d8490: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1d8490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1d8494: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1d8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1d8498: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1d8498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1d849c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1d849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1d84a0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1d84a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d84a4: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1D84A4u;
    SET_GPR_U32(ctx, 31, 0x1D84ACu);
    ctx->pc = 0x1D84A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84A4u;
    // 0x1d84a8: 0xafa60038  sw          $a2, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1D84A4u, 0x1D84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84ACu;
label_1d84ac:
    // 0x1d84ac: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1d84acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1d84b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d84b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d84b4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d84b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d84b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d84b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d84bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d84c0: 0xc085478  jal         func_2151E0
    ctx->pc = 0x1D84C0u;
    SET_GPR_U32(ctx, 31, 0x1D84C8u);
    ctx->pc = 0x1D84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84C0u;
    // 0x1d84c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2151E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2151E0u, 0x1D84C0u, 0x1D84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84C8u;
label_1d84c8:
    // 0x1d84c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d84cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1d84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d84d0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D84D0u;
    {
        const bool branch_taken_0x1d84d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84D0u;
        // 0x1d84d4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84d0) {
            ctx->pc = 0x1D84DCu;
            goto label_1d84dc;
        }
    }
    ctx->pc = 0x1D84D8u;
    // 0x1d84d8: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x1d84d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d84dc:
    // 0x1d84dc: 0x12e000ea  beqz        $s7, . + 4 + (0xEA << 2)
    ctx->pc = 0x1D84DCu;
    {
        const bool branch_taken_0x1d84dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84DCu;
        // 0x1d84e0: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84dc) {
            ctx->pc = 0x1D8888u;
            goto label_1d8888;
        }
    }
    ctx->pc = 0x1D84E4u;
    // 0x1d84e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d84e8: 0x8c42d9a4  lw          $v0, -0x265C($v0)
    ctx->pc = 0x1d84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x45D9A4u));
    // 0x1d84ec: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1d84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1d84f0: 0x8ee300b8  lw          $v1, 0xB8($s7)
    ctx->pc = 0x1d84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 184)));
    // 0x1d84f4: 0x0  nop
    ctx->pc = 0x1d84f4u;
    // NOP
label_1d84f8:
    // 0x1d84f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d84fc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1d84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1d8500: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d8500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d8504: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1D8504u;
    {
        const bool branch_taken_0x1d8504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8504u;
        // 0x1d8508: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8504) {
            ctx->pc = 0x1D8864u;
            goto label_1d8864;
        }
    }
    ctx->pc = 0x1D850Cu;
    // 0x1d850c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d8510: 0x8c4391ac  lw          $v1, -0x6E54($v0)
    ctx->pc = 0x1d8510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ACu));
    // 0x1d8514: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8514u;
    {
        const bool branch_taken_0x1d8514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8514u;
        // 0x1d8518: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8514) {
            ctx->pc = 0x1D8530u;
            goto label_1d8530;
        }
    }
    ctx->pc = 0x1D851Cu;
    // 0x1d851c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1d851cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1d8520: 0x8ee300bc  lw          $v1, 0xBC($s7)
    ctx->pc = 0x1d8520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 188)));
    // 0x1d8524: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d8524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d8528: 0x106200ce  beq         $v1, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1D8528u;
    {
        const bool branch_taken_0x1d8528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8528u;
        // 0x1d852c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8528) {
            ctx->pc = 0x1D8864u;
            goto label_1d8864;
        }
    }
    ctx->pc = 0x1D8530u;
label_1d8530:
    // 0x1d8530: 0x8ef000c4  lw          $s0, 0xC4($s7)
    ctx->pc = 0x1d8530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 196)));
    // 0x1d8534: 0xc454d79c  lwc1        $f20, -0x2864($v0)
    ctx->pc = 0x1d8534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d8538: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1d8538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1d853c: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8540: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d8540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8544: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1d8544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d8548: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d8548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d854c: 0x8c642b20  lw          $a0, 0x2B20($v1)
    ctx->pc = 0x1d854cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B20u));
    // 0x1d8550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8554: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d8554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8558: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1d8558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d855c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d8560: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d8560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8564: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1D8564u;
    SET_GPR_U32(ctx, 31, 0x1D856Cu);
    ctx->pc = 0x1D8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8564u;
    // 0x1d8568: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1D8564u, 0x1D856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D856Cu;
label_1d856c:
    // 0x1d856c: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x1D856Cu;
    {
        const bool branch_taken_0x1d856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D856Cu;
        // 0x1d8570: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d856c) {
            ctx->pc = 0x1D8860u;
            goto label_1d8860;
        }
    }
    ctx->pc = 0x1D8574u;
    // 0x1d8574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d8574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8578: 0x10800083  beqz        $a0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1D8578u;
    {
        const bool branch_taken_0x1d8578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8578u;
        // 0x1d857c: 0x8e432b1c  lw          $v1, 0x2B1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8578) {
            ctx->pc = 0x1D8788u;
            goto label_1d8788;
        }
    }
    ctx->pc = 0x1D8580u;
    // 0x1d8580: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d8580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8584: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1d8584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d8588: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1D8588u;
    {
        const bool branch_taken_0x1d8588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8588u;
        // 0x1d858c: 0x8e642b20  lw          $a0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8588) {
            ctx->pc = 0x1D8860u;
            goto label_1d8860;
        }
    }
    ctx->pc = 0x1D8590u;
    // 0x1d8590: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d8590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8598: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d859c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d85a0: 0xac750024  sw          $s5, 0x24($v1)
    ctx->pc = 0x1d85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 21));
    // 0x1d85a4: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d85a8: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d85ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d85acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d85b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d85b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d85b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d85bc: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x1d85bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x1d85c0: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d85c4: 0x8e632b20  lw          $v1, 0x2B20($s3)
    ctx->pc = 0x1d85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d85c8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1d85c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d85cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d85d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d85d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d85d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d85dc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1D85DCu;
    {
        const bool branch_taken_0x1d85dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85DCu;
        // 0x1d85e0: 0xac64002c  sw          $a0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85dc) {
            ctx->pc = 0x1D8710u;
            goto label_1d8710;
        }
    }
    ctx->pc = 0x1D85E4u;
label_1d85e4:
    // 0x1d85e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d85e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85e8: 0x8e662b20  lw          $a2, 0x2B20($s3)
    ctx->pc = 0x1d85e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d85ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d85ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d85f4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1d85f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d85f8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d85fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8600: 0xac750024  sw          $s5, 0x24($v1)
    ctx->pc = 0x1d8600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 21));
    // 0x1d8604: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8608: 0x8e662b20  lw          $a2, 0x2B20($s3)
    ctx->pc = 0x1d8608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d860c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d860cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8610: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d8610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d8614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8618: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d861c: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1D861Cu;
    SET_GPR_U32(ctx, 31, 0x1D8624u);
    ctx->pc = 0x1D8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D861Cu;
    // 0x1d8620: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1D861Cu, 0x1D8624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8624u;
label_1d8624:
    // 0x1d8624: 0x8e442b1c  lw          $a0, 0x2B1C($s2)
    ctx->pc = 0x1d8624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8628: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1d8628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d862c: 0x8e652b20  lw          $a1, 0x2B20($s3)
    ctx->pc = 0x1d862cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d8630: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d8630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d8634: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d8634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d8638: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d8638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d863c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1d863cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1d8640: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8644: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d8644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d8648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d864c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d8650: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8654: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x1d8654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x1d8658: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d865c: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d8660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8664: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1d8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8668: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d866c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8670: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1d8670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1d8674: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8678: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d8678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d867c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d867cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8680: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d8684: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d8684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8688: 0xac770034  sw          $s7, 0x34($v1)
    ctx->pc = 0x1d8688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 23));
    // 0x1d868c: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8690: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d8690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d8694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8698: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d869c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d86a0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d86a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d86a4: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1d86a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1d86a8: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d86ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d86acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d86b0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1D86B0u;
    {
        const bool branch_taken_0x1d86b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86B0u;
        // 0x1d86b4: 0xae422b1c  sw          $v0, 0x2B1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86b0) {
            ctx->pc = 0x1D8800u;
            goto label_1d8800;
        }
    }
    ctx->pc = 0x1D86B8u;
label_1d86b8:
    // 0x1d86b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d86b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86bc: 0x8e662b20  lw          $a2, 0x2B20($s3)
    ctx->pc = 0x1d86bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d86c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d86c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d86c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d86cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d86d0: 0xac750024  sw          $s5, 0x24($v1)
    ctx->pc = 0x1d86d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 21));
    // 0x1d86d4: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d86d8: 0x8e662b20  lw          $a2, 0x2B20($s3)
    ctx->pc = 0x1d86d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d86dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d86e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d86e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d86e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d86ec: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1D86ECu;
    SET_GPR_U32(ctx, 31, 0x1D86F4u);
    ctx->pc = 0x1D86F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86ECu;
    // 0x1d86f0: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1D86ECu, 0x1D86F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86F4u;
label_1d86f4:
    // 0x1d86f4: 0x8e442b1c  lw          $a0, 0x2B1C($s2)
    ctx->pc = 0x1d86f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d86f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d86f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d86fc: 0x8e652b20  lw          $a1, 0x2B20($s3)
    ctx->pc = 0x1d86fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d8700: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d8700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d8704: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d8704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d8708: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d8708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d870c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1d870cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_1d8710:
    // 0x1d8710: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8714: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d8714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d8718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d871c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d8720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d8720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8724: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x1d8724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x1d8728: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d872c: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d8730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8734: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1d8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8738: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d873c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8740: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1d8740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1d8744: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8748: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d8748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d874c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d874cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8750: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d8754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d8754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8758: 0xac770034  sw          $s7, 0x34($v1)
    ctx->pc = 0x1d8758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 23));
    // 0x1d875c: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8760: 0x8e642b20  lw          $a0, 0x2B20($s3)
    ctx->pc = 0x1d8760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d8764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8768: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d876c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8770: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d8770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8774: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1d8774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1d8778: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d877c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8780: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D8780u;
    {
        const bool branch_taken_0x1d8780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8780u;
        // 0x1d8784: 0xae422b1c  sw          $v0, 0x2B1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8780) {
            ctx->pc = 0x1D8860u;
            goto label_1d8860;
        }
    }
    ctx->pc = 0x1D8788u;
label_1d8788:
    // 0x1d8788: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1d8788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d878c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d878cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8790: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1d8790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8794: 0x8ee200c4  lw          $v0, 0xC4($s7)
    ctx->pc = 0x1d8794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 196)));
    // 0x1d8798: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1d8798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d879c: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d87a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d87a4: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1d87a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d87a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D87A8u;
    {
        const bool branch_taken_0x1d87a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87A8u;
        // 0x1d87ac: 0x8c74000c  lw          $s4, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87a8) {
            ctx->pc = 0x1D8800u;
            goto label_1d8800;
        }
    }
    ctx->pc = 0x1D87B0u;
    // 0x1d87b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d87b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87b4: 0x0  nop
    ctx->pc = 0x1d87b4u;
    // NOP
label_1d87b8:
    // 0x1d87b8: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1D87B8u;
    SET_GPR_U32(ctx, 31, 0x1D87C0u);
    ctx->pc = 0x1D87BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87B8u;
    // 0x1d87bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1D87B8u, 0x1D87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87C0u;
label_1d87c0:
    // 0x1d87c0: 0x8e432b1c  lw          $v1, 0x2B1C($s2)
    ctx->pc = 0x1d87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d87c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d87c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87c8: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d87cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d87ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d87d4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1d87d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d87dc: 0xc0786de  jal         func_1E1B78
    ctx->pc = 0x1D87DCu;
    SET_GPR_U32(ctx, 31, 0x1D87E4u);
    ctx->pc = 0x1D87E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87DCu;
    // 0x1d87e0: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1B78u, 0x1D87DCu, 0x1D87E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87E4u;
label_1d87e4:
    // 0x1d87e4: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x1D87E4u;
    {
        const bool branch_taken_0x1d87e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87E4u;
        // 0x1d87e8: 0x8e422b1c  lw          $v0, 0x2B1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87e4) {
            ctx->pc = 0x1D85E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d85e4;
        }
    }
    ctx->pc = 0x1D87ECu;
    // 0x1d87ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d87f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d87f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d87f4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1d87f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d87f8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D87F8u;
    {
        const bool branch_taken_0x1d87f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87F8u;
        // 0x1d87fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87f8) {
            ctx->pc = 0x1D87B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d87b8;
        }
    }
    ctx->pc = 0x1D8800u;
label_1d8800:
    // 0x1d8800: 0x16c00018  bnez        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D8800u;
    {
        const bool branch_taken_0x1d8800 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8800u;
        // 0x1d8804: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8800) {
            ctx->pc = 0x1D8864u;
            goto label_1d8864;
        }
    }
    ctx->pc = 0x1D8808u;
    // 0x1d8808: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1d8808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d880c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D880Cu;
    {
        const bool branch_taken_0x1d880c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D880Cu;
        // 0x1d8810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d880c) {
            ctx->pc = 0x1D8864u;
            goto label_1d8864;
        }
    }
    ctx->pc = 0x1D8814u;
    // 0x1d8814: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d8814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d8818:
    // 0x1d8818: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1D8818u;
    SET_GPR_U32(ctx, 31, 0x1D8820u);
    ctx->pc = 0x1D881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8818u;
    // 0x1d881c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1D8818u, 0x1D8820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8820u;
label_1d8820:
    // 0x1d8820: 0x8e432b1c  lw          $v1, 0x2B1C($s2)
    ctx->pc = 0x1d8820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d8824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8828: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1d8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1d882c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d882cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8834: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1d8834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8838: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d8838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d883c: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1D883Cu;
    SET_GPR_U32(ctx, 31, 0x1D8844u);
    ctx->pc = 0x1D8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D883Cu;
    // 0x1d8840: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1D883Cu, 0x1D8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x1D8844u;
    {
        const bool branch_taken_0x1d8844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8844u;
        // 0x1d8848: 0x8e422b1c  lw          $v0, 0x2B1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8844) {
            ctx->pc = 0x1D86B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d86b8;
        }
    }
    ctx->pc = 0x1D884Cu;
    // 0x1d884c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1d884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d8850: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d8850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d8854: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1d8854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8858: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D8858u;
    {
        const bool branch_taken_0x1d8858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8858u;
        // 0x1d885c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8858) {
            ctx->pc = 0x1D8818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8818;
        }
    }
    ctx->pc = 0x1D8860u;
label_1d8860:
    // 0x1d8860: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1d8860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d8864:
    // 0x1d8864: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d8864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8868: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8868u;
    {
        const bool branch_taken_0x1d8868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8868u;
        // 0x1d886c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8868) {
            ctx->pc = 0x1D8880u;
            goto label_1d8880;
        }
    }
    ctx->pc = 0x1D8870u;
    // 0x1d8870: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1d8870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d8874: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8874u;
    {
        const bool branch_taken_0x1d8874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8874u;
        // 0x1d8878: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8874) {
            ctx->pc = 0x1D8880u;
            goto label_1d8880;
        }
    }
    ctx->pc = 0x1D887Cu;
    // 0x1d887c: 0x8c770004  lw          $s7, 0x4($v1)
    ctx->pc = 0x1d887cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d8880:
    // 0x1d8880: 0x56e0ff1d  bnel        $s7, $zero, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x1D8880u;
    {
        const bool branch_taken_0x1d8880 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8880) {
            ctx->pc = 0x1D8884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8880u;
            // 0x1d8884: 0x8ee300b8  lw          $v1, 0xB8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D84F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d84f8;
        }
    }
    ctx->pc = 0x1D8888u;
label_1d8888:
    // 0x1d8888: 0x8e422b1c  lw          $v0, 0x2B1C($s2)
    ctx->pc = 0x1d8888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11036)));
    // 0x1d888c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1d888cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8890: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8890u;
    {
        const bool branch_taken_0x1d8890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8890u;
        // 0x1d8894: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8890) {
            ctx->pc = 0x1D88A0u;
            goto label_1d88a0;
        }
    }
    ctx->pc = 0x1D8898u;
    // 0x1d8898: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D8898u;
    SET_GPR_U32(ctx, 31, 0x1D88A0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D8898u, 0x1D88A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88A0u;
label_1d88a0:
    // 0x1d88a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d88a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88a4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1d88a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d88a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1d88a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d88ac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1d88acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d88b0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1d88b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d88b4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1d88b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d88b8: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1d88b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d88bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1d88bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d88c0: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1d88c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d88c4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1d88c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d88c8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1d88c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d88cc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1d88ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d88d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D88D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88D0u;
        // 0x1d88d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D88D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D88D8u;
    // 0x1d88d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1d88d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d88dc: 0x0  nop
    ctx->pc = 0x1d88dcu;
    // NOP
    ctx->pc = 0x1d88e0u;
}
