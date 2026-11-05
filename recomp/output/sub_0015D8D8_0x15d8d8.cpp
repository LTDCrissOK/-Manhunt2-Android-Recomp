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

// Function: sub_0015D8D8
// Address: 0x15d8d8 - 0x15de80
void sub_0015D8D8_0x15d8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D8D8_0x15d8d8");
#endif

    switch (ctx->pc) {
        case 0x15d940u: goto label_15d940;
        case 0x15d984u: goto label_15d984;
        case 0x15d994u: goto label_15d994;
        case 0x15d9a4u: goto label_15d9a4;
        case 0x15d9bcu: goto label_15d9bc;
        case 0x15d9ecu: goto label_15d9ec;
        case 0x15da30u: goto label_15da30;
        case 0x15da3cu: goto label_15da3c;
        case 0x15da48u: goto label_15da48;
        case 0x15da58u: goto label_15da58;
        case 0x15da78u: goto label_15da78;
        case 0x15dadcu: goto label_15dadc;
        case 0x15daf4u: goto label_15daf4;
        case 0x15db14u: goto label_15db14;
        case 0x15db20u: goto label_15db20;
        case 0x15db38u: goto label_15db38;
        case 0x15db58u: goto label_15db58;
        case 0x15db6cu: goto label_15db6c;
        case 0x15db78u: goto label_15db78;
        case 0x15dbb4u: goto label_15dbb4;
        case 0x15dbd0u: goto label_15dbd0;
        case 0x15dbe8u: goto label_15dbe8;
        case 0x15dbfcu: goto label_15dbfc;
        case 0x15dc24u: goto label_15dc24;
        case 0x15dc6cu: goto label_15dc6c;
        case 0x15dc78u: goto label_15dc78;
        case 0x15dc94u: goto label_15dc94;
        case 0x15dcacu: goto label_15dcac;
        case 0x15dd30u: goto label_15dd30;
        case 0x15ddfcu: goto label_15ddfc;
        case 0x15de34u: goto label_15de34;
        case 0x15de48u: goto label_15de48;
        default: break;
    }

    ctx->pc = 0x15d8d8u;

    // 0x15d8d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15d8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15d8dc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15d8e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x15d8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x15d8e4: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15d8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x15d8e8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x15d8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x15d8ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15d8ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8f0: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x15d8f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15d8f4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x15d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x15d8f8: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x15d8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15d8fc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x15d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x15d900: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x15d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x15d904: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15d904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x15d908: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x15d908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x15d90c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x15d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x15d910: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x15d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x15d914: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x15d914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15d918: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x15d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x15d91c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15d920: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x15d920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x15d924: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x15d924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x15d928: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x15d928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x15d92c: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x15d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d930: 0x8c5e0320  lw          $fp, 0x320($v0)
    ctx->pc = 0x15d930u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x15d934: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x15d934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15d938: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x15D938u;
    SET_GPR_U32(ctx, 31, 0x15D940u);
    ctx->pc = 0x15D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D938u;
    // 0x15d93c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15D938u, 0x15D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D940u;
label_15d940:
    // 0x15d940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d944: 0x52000141  beql        $s0, $zero, . + 4 + (0x141 << 2)
    ctx->pc = 0x15D944u;
    {
        const bool branch_taken_0x15d944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d944) {
            ctx->pc = 0x15D948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D944u;
            // 0x15d948: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15D94Cu;
    // 0x15d94c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d950: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x15d950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x15d954: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x15d958: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x15d958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x15d95c: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x15d95cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d960: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15d960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d964: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15d964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15d968: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x15d968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x15d96c: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x15d96cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15d970: 0x8e160010  lw          $s6, 0x10($s0)
    ctx->pc = 0x15d970u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15d974: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D974u;
    {
        const bool branch_taken_0x15d974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D974u;
        // 0x15d978: 0x8e15000c  lw          $s5, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d974) {
            ctx->pc = 0x15D98Cu;
            goto label_15d98c;
        }
    }
    ctx->pc = 0x15D97Cu;
    // 0x15d97c: 0xc0f70d8  jal         func_3DC360
    ctx->pc = 0x15D97Cu;
    SET_GPR_U32(ctx, 31, 0x15D984u);
    ctx->pc = 0x15D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D97Cu;
    // 0x15d980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC360u, 0x15D97Cu, 0x15D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D984u;
label_15d984:
    // 0x15d984: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15d984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15d988: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15d988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_15d98c:
    // 0x15d98c: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x15D98Cu;
    SET_GPR_U32(ctx, 31, 0x15D994u);
    ctx->pc = 0x15D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D98Cu;
    // 0x15d990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15D98Cu, 0x15D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D994u;
label_15d994:
    // 0x15d994: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15d994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15d998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d99c: 0xc042128  jal         func_1084A0
    ctx->pc = 0x15D99Cu;
    SET_GPR_U32(ctx, 31, 0x15D9A4u);
    ctx->pc = 0x15D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D99Cu;
    // 0x15d9a0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15D99Cu, 0x15D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9A4u;
label_15d9a4:
    // 0x15d9a4: 0x52c00129  beql        $s6, $zero, . + 4 + (0x129 << 2)
    ctx->pc = 0x15D9A4u;
    {
        const bool branch_taken_0x15d9a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d9a4) {
            ctx->pc = 0x15D9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D9A4u;
            // 0x15d9a8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15D9ACu;
    // 0x15d9ac: 0x12a00126  beqz        $s5, . + 4 + (0x126 << 2)
    ctx->pc = 0x15D9ACu;
    {
        const bool branch_taken_0x15d9ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9ACu;
        // 0x15d9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9ac) {
            ctx->pc = 0x15DE48u;
            goto label_15de48;
        }
    }
    ctx->pc = 0x15D9B4u;
    // 0x15d9b4: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x15D9B4u;
    SET_GPR_U32(ctx, 31, 0x15D9BCu);
    ctx->pc = 0x15D9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9B4u;
    // 0x15d9b8: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x15D9B4u, 0x15D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9BCu;
label_15d9bc:
    // 0x15d9bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15d9bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D9C0u;
    {
        const bool branch_taken_0x15d9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9C0u;
        // 0x15d9c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9c0) {
            ctx->pc = 0x15D9D0u;
            goto label_15d9d0;
        }
    }
    ctx->pc = 0x15D9C8u;
    // 0x15d9c8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D9C8u;
    {
        const bool branch_taken_0x15d9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d9c8) {
            ctx->pc = 0x15D9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D9C8u;
            // 0x15d9cc: 0x8e4502e4  lw          $a1, 0x2E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D9DCu;
            goto label_15d9dc;
        }
    }
    ctx->pc = 0x15D9D0u;
label_15d9d0:
    // 0x15d9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d9d4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x15d9d8: 0x8e4502e4  lw          $a1, 0x2E4($s2)
    ctx->pc = 0x15d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
label_15d9dc:
    // 0x15d9dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9e0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15d9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9e4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15D9E4u;
    SET_GPR_U32(ctx, 31, 0x15D9ECu);
    ctx->pc = 0x15D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9E4u;
    // 0x15d9e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15D9E4u, 0x15D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9ECu;
label_15d9ec:
    // 0x15d9ec: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d9f0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d9f4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15d9f8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15d9f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15d9fc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15d9fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15da00: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15da00u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15da04: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x15da04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15da08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15da08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15da0c: 0x0  nop
    ctx->pc = 0x15da0cu;
    // NOP
    // 0x15da10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15DA10u;
    {
        const bool branch_taken_0x15da10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15da10) {
            ctx->pc = 0x15DA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DA10u;
            // 0x15da14: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DA18u;
            goto label_15da18;
        }
    }
    ctx->pc = 0x15DA18u;
label_15da18:
    // 0x15da18: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15DA18u;
    {
        const bool branch_taken_0x15da18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA18u;
        // 0x15da1c: 0x3a820009  xori        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da18) {
            ctx->pc = 0x15DA80u;
            goto label_15da80;
        }
    }
    ctx->pc = 0x15DA20u;
    // 0x15da20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15DA20u;
    {
        const bool branch_taken_0x15da20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA20u;
        // 0x15da24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da20) {
            ctx->pc = 0x15DA50u;
            goto label_15da50;
        }
    }
    ctx->pc = 0x15DA28u;
    // 0x15da28: 0xc0573dc  jal         func_15CF70
    ctx->pc = 0x15DA28u;
    SET_GPR_U32(ctx, 31, 0x15DA30u);
    ctx->pc = 0x15DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA28u;
    // 0x15da2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF70u, 0x15DA28u, 0x15DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA30u;
label_15da30:
    // 0x15da30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15da30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da34: 0xc0570d0  jal         func_15C340
    ctx->pc = 0x15DA34u;
    SET_GPR_U32(ctx, 31, 0x15DA3Cu);
    ctx->pc = 0x15DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA34u;
    // 0x15da38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C340u, 0x15DA34u, 0x15DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA3Cu;
label_15da3c:
    // 0x15da3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15da3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da40: 0xc058064  jal         func_160190
    ctx->pc = 0x15DA40u;
    SET_GPR_U32(ctx, 31, 0x15DA48u);
    ctx->pc = 0x15DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA40u;
    // 0x15da44: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160190u, 0x15DA40u, 0x15DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA48u;
label_15da48:
    // 0x15da48: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x15DA48u;
    {
        const bool branch_taken_0x15da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA48u;
        // 0x15da4c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da48) {
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15DA50u;
label_15da50:
    // 0x15da50: 0xc0573dc  jal         func_15CF70
    ctx->pc = 0x15DA50u;
    SET_GPR_U32(ctx, 31, 0x15DA58u);
    ctx->pc = 0x15DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA50u;
    // 0x15da54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF70u, 0x15DA50u, 0x15DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA58u;
label_15da58:
    // 0x15da58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15da58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15da5c: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x15DA5Cu;
    {
        const bool branch_taken_0x15da5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA5Cu;
        // 0x15da60: 0x8fa80024  lw          $t0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da5c) {
            ctx->pc = 0x15DB44u;
            goto label_15db44;
        }
    }
    ctx->pc = 0x15DA64u;
    // 0x15da64: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x15da64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15da68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15da68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15da6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da70: 0xc05727e  jal         func_15C9F8
    ctx->pc = 0x15DA70u;
    SET_GPR_U32(ctx, 31, 0x15DA78u);
    ctx->pc = 0x15DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA70u;
    // 0x15da74: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C9F8u, 0x15DA70u, 0x15DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA78u;
label_15da78:
    // 0x15da78: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x15DA78u;
    {
        const bool branch_taken_0x15da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA78u;
        // 0x15da7c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da78) {
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15DA80u;
label_15da80:
    // 0x15da80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x15da80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15da84: 0x1480003f  bnez        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x15DA84u;
    {
        const bool branch_taken_0x15da84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA84u;
        // 0x15da88: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da84) {
            ctx->pc = 0x15DB84u;
            goto label_15db84;
        }
    }
    ctx->pc = 0x15DA8Cu;
    // 0x15da8c: 0x8e420318  lw          $v0, 0x318($s2)
    ctx->pc = 0x15da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    // 0x15da90: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x15DA90u;
    {
        const bool branch_taken_0x15da90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA90u;
        // 0x15da94: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da90) {
            ctx->pc = 0x15DB80u;
            goto label_15db80;
        }
    }
    ctx->pc = 0x15DA98u;
    // 0x15da98: 0x12830002  beq         $s4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15DA98u;
    {
        const bool branch_taken_0x15da98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x15DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA98u;
        // 0x15da9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da98) {
            ctx->pc = 0x15DAA4u;
            goto label_15daa4;
        }
    }
    ctx->pc = 0x15DAA0u;
    // 0x15daa0: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x15daa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_15daa4:
    // 0x15daa4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15DAA4u;
    {
        const bool branch_taken_0x15daa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15daa4) {
            ctx->pc = 0x15DAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DAA4u;
            // 0x15daa8: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DAC4u;
            goto label_15dac4;
        }
    }
    ctx->pc = 0x15DAACu;
    // 0x15daac: 0x12e30003  beq         $s7, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DAACu;
    {
        const bool branch_taken_0x15daac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x15daac) {
            ctx->pc = 0x15DABCu;
            goto label_15dabc;
        }
    }
    ctx->pc = 0x15DAB4u;
    // 0x15dab4: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x15dab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15dab8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15dab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15dabc:
    // 0x15dabc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x15DABCu;
    {
        const bool branch_taken_0x15dabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DABCu;
        // 0x15dac0: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dabc) {
            ctx->pc = 0x15DB80u;
            goto label_15db80;
        }
    }
    ctx->pc = 0x15DAC4u;
label_15dac4:
    // 0x15dac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15dac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dac8: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15dac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15dacc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15dad0: 0x8c510320  lw          $s1, 0x320($v0)
    ctx->pc = 0x15dad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x15dad4: 0xc057c5a  jal         func_15F168
    ctx->pc = 0x15DAD4u;
    SET_GPR_U32(ctx, 31, 0x15DADCu);
    ctx->pc = 0x15DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAD4u;
    // 0x15dad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F168u, 0x15DAD4u, 0x15DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DADCu;
label_15dadc:
    // 0x15dadc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15dadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dae0: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x15DAE0u;
    {
        const bool branch_taken_0x15dae0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAE0u;
        // 0x15dae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dae0) {
            ctx->pc = 0x15DB18u;
            goto label_15db18;
        }
    }
    ctx->pc = 0x15DAE8u;
    // 0x15dae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15dae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15daec: 0xc057c98  jal         func_15F260
    ctx->pc = 0x15DAECu;
    SET_GPR_U32(ctx, 31, 0x15DAF4u);
    ctx->pc = 0x15DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAECu;
    // 0x15daf0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F260u, 0x15DAECu, 0x15DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAF4u;
label_15daf4:
    // 0x15daf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15daf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15daf8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DAF8u;
    {
        const bool branch_taken_0x15daf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAF8u;
        // 0x15dafc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15daf8) {
            ctx->pc = 0x15DB14u;
            goto label_15db14;
        }
    }
    ctx->pc = 0x15DB00u;
    // 0x15db00: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15db04: 0x2464b060  addiu       $a0, $v1, -0x4FA0
    ctx->pc = 0x15db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946912));
    // 0x15db08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15db08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db0c: 0xc04add4  jal         func_12B750
    ctx->pc = 0x15DB0Cu;
    SET_GPR_U32(ctx, 31, 0x15DB14u);
    ctx->pc = 0x15DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB0Cu;
    // 0x15db10: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x15DB0Cu, 0x15DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB14u;
label_15db14:
    // 0x15db14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15db14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15db18:
    // 0x15db18: 0xc057d9c  jal         func_15F670
    ctx->pc = 0x15DB18u;
    SET_GPR_U32(ctx, 31, 0x15DB20u);
    ctx->pc = 0x15DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB18u;
    // 0x15db1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F670u, 0x15DB18u, 0x15DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB20u;
label_15db20:
    // 0x15db20: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DB20u;
    {
        const bool branch_taken_0x15db20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB20u;
        // 0x15db24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db20) {
            ctx->pc = 0x15DB30u;
            goto label_15db30;
        }
    }
    ctx->pc = 0x15DB28u;
    // 0x15db28: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15DB28u;
    {
        const bool branch_taken_0x15db28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB28u;
        // 0x15db2c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db28) {
            ctx->pc = 0x15DB84u;
            goto label_15db84;
        }
    }
    ctx->pc = 0x15DB30u;
label_15db30:
    // 0x15db30: 0xc0573dc  jal         func_15CF70
    ctx->pc = 0x15DB30u;
    SET_GPR_U32(ctx, 31, 0x15DB38u);
    ctx->pc = 0x15DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB30u;
    // 0x15db34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF70u, 0x15DB30u, 0x15DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB38u;
label_15db38:
    // 0x15db38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x15db38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15db3c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15DB3Cu;
    {
        const bool branch_taken_0x15db3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB3Cu;
        // 0x15db40: 0x8fa80024  lw          $t0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db3c) {
            ctx->pc = 0x15DB60u;
            goto label_15db60;
        }
    }
    ctx->pc = 0x15DB44u;
label_15db44:
    // 0x15db44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15db44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15db48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db4c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15db4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db50: 0xc05730e  jal         func_15CC38
    ctx->pc = 0x15DB50u;
    SET_GPR_U32(ctx, 31, 0x15DB58u);
    ctx->pc = 0x15DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB50u;
    // 0x15db54: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC38u, 0x15DB50u, 0x15DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB58u;
label_15db58:
    // 0x15db58: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x15DB58u;
    {
        const bool branch_taken_0x15db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB58u;
        // 0x15db5c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db58) {
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15DB60u;
label_15db60:
    // 0x15db60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15db60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db64: 0xc057150  jal         func_15C540
    ctx->pc = 0x15DB64u;
    SET_GPR_U32(ctx, 31, 0x15DB6Cu);
    ctx->pc = 0x15DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB64u;
    // 0x15db68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C540u, 0x15DB64u, 0x15DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB6Cu;
label_15db6c:
    // 0x15db6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15db6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db70: 0xc058064  jal         func_160190
    ctx->pc = 0x15DB70u;
    SET_GPR_U32(ctx, 31, 0x15DB78u);
    ctx->pc = 0x15DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB70u;
    // 0x15db74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160190u, 0x15DB70u, 0x15DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB78u;
label_15db78:
    // 0x15db78: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x15DB78u;
    {
        const bool branch_taken_0x15db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB78u;
        // 0x15db7c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db78) {
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15DB80u;
label_15db80:
    // 0x15db80: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15db84:
    // 0x15db84: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DB84u;
    {
        const bool branch_taken_0x15db84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x15DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB84u;
        // 0x15db88: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db84) {
            ctx->pc = 0x15DBA0u;
            goto label_15dba0;
        }
    }
    ctx->pc = 0x15DB8Cu;
    // 0x15db8c: 0x12f40003  beq         $s7, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DB8Cu;
    {
        const bool branch_taken_0x15db8c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 20));
        ctx->pc = 0x15DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB8Cu;
        // 0x15db90: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db8c) {
            ctx->pc = 0x15DB9Cu;
            goto label_15db9c;
        }
    }
    ctx->pc = 0x15DB94u;
    // 0x15db94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DB94u;
    {
        const bool branch_taken_0x15db94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB94u;
        // 0x15db98: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db94) {
            ctx->pc = 0x15DBA4u;
            goto label_15dba4;
        }
    }
    ctx->pc = 0x15DB9Cu;
label_15db9c:
    // 0x15db9c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15db9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dba0:
    // 0x15dba0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_15dba4:
    // 0x15dba4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15DBA4u;
    {
        const bool branch_taken_0x15dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBA4u;
        // 0x15dba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dba4) {
            ctx->pc = 0x15DBFCu;
            goto label_15dbfc;
        }
    }
    ctx->pc = 0x15DBACu;
    // 0x15dbac: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x15DBACu;
    SET_GPR_U32(ctx, 31, 0x15DBB4u);
    ctx->pc = 0x15DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBACu;
    // 0x15dbb0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15DBACu, 0x15DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBB4u;
label_15dbb4:
    // 0x15dbb4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x15dbb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dbb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15dbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbbc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x15dbc0: 0x2471b060  addiu       $s1, $v1, -0x4FA0
    ctx->pc = 0x15dbc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946912));
    // 0x15dbc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15dbc8: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x15DBC8u;
    SET_GPR_U32(ctx, 31, 0x15DBD0u);
    ctx->pc = 0x15DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBC8u;
    // 0x15dbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x15DBC8u, 0x15DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBD0u;
label_15dbd0:
    // 0x15dbd0: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15dbd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbd8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x15dbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbdc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15dbdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbe0: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x15DBE0u;
    SET_GPR_U32(ctx, 31, 0x15DBE8u);
    ctx->pc = 0x15DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBE0u;
    // 0x15dbe4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x15DBE0u, 0x15DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBE8u;
label_15dbe8:
    // 0x15dbe8: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15dbec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbf0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x15dbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbf4: 0xc04add4  jal         func_12B750
    ctx->pc = 0x15DBF4u;
    SET_GPR_U32(ctx, 31, 0x15DBFCu);
    ctx->pc = 0x15DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBF4u;
    // 0x15dbf8: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x15DBF4u, 0x15DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBFCu;
label_15dbfc:
    // 0x15dbfc: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x15DBFCu;
    {
        const bool branch_taken_0x15dbfc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBFCu;
        // 0x15dc00: 0x24100070  addiu       $s0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dbfc) {
            ctx->pc = 0x15DC40u;
            goto label_15dc40;
        }
    }
    ctx->pc = 0x15DC04u;
    // 0x15dc04: 0x2701818  mult        $v1, $s3, $s0
    ctx->pc = 0x15dc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15dc08: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15dc0c: 0x8c430344  lw          $v1, 0x344($v0)
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x15dc10: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15DC10u;
    {
        const bool branch_taken_0x15dc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC10u;
        // 0x15dc14: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc10) {
            ctx->pc = 0x15DC44u;
            goto label_15dc44;
        }
    }
    ctx->pc = 0x15DC18u;
    // 0x15dc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc1c: 0xc057400  jal         func_15D000
    ctx->pc = 0x15DC1Cu;
    SET_GPR_U32(ctx, 31, 0x15DC24u);
    ctx->pc = 0x15DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC1Cu;
    // 0x15dc20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D000u, 0x15DC1Cu, 0x15DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC24u;
label_15dc24:
    // 0x15dc24: 0x2701818  mult        $v1, $s3, $s0
    ctx->pc = 0x15dc24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15dc28: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15dc2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dc34: 0xac400384  sw          $zero, 0x384($v0)
    ctx->pc = 0x15dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 900), GPR_U32(ctx, 0));
    // 0x15dc38: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x15DC38u;
    {
        const bool branch_taken_0x15dc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC38u;
        // 0x15dc3c: 0xac830344  sw          $v1, 0x344($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc38) {
            ctx->pc = 0x15DE48u;
            goto label_15de48;
        }
    }
    ctx->pc = 0x15DC40u;
label_15dc40:
    // 0x15dc40: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15dc44:
    // 0x15dc44: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x15dc44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15dc48: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x15dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15dc4c: 0x16a0004c  bnez        $s5, . + 4 + (0x4C << 2)
    ctx->pc = 0x15DC4Cu;
    {
        const bool branch_taken_0x15dc4c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC4Cu;
        // 0x15dc50: 0xac550344  sw          $s5, 0x344($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 836), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc4c) {
            ctx->pc = 0x15DD80u;
            goto label_15dd80;
        }
    }
    ctx->pc = 0x15DC54u;
    // 0x15dc54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15dc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc58: 0x8e11033c  lw          $s1, 0x33C($s0)
    ctx->pc = 0x15dc58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x15dc5c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15DC5Cu;
    {
        const bool branch_taken_0x15dc5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC5Cu;
        // 0x15dc60: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc5c) {
            ctx->pc = 0x15DCB0u;
            goto label_15dcb0;
        }
    }
    ctx->pc = 0x15DC64u;
    // 0x15dc64: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15DC64u;
    SET_GPR_U32(ctx, 31, 0x15DC6Cu);
    ctx->pc = 0x15DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC64u;
    // 0x15dc68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15DC64u, 0x15DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC6Cu;
label_15dc6c:
    // 0x15dc6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15dc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc70: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15DC70u;
    SET_GPR_U32(ctx, 31, 0x15DC78u);
    ctx->pc = 0x15DC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC70u;
    // 0x15dc74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15DC70u, 0x15DC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC78u;
label_15dc78:
    // 0x15dc78: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15DC78u;
    {
        const bool branch_taken_0x15dc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dc78) {
            ctx->pc = 0x15DC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DC78u;
            // 0x15dc7c: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DC9Cu;
            goto label_15dc9c;
        }
    }
    ctx->pc = 0x15DC80u;
    // 0x15dc80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dc84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15dc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc88: 0xae020330  sw          $v0, 0x330($s0)
    ctx->pc = 0x15dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x15dc8c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15DC8Cu;
    SET_GPR_U32(ctx, 31, 0x15DC94u);
    ctx->pc = 0x15DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC8Cu;
    // 0x15dc90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15DC8Cu, 0x15DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC94u;
label_15dc94:
    // 0x15dc94: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x15DC94u;
    {
        const bool branch_taken_0x15dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC94u;
        // 0x15dc98: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc94) {
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15DC9Cu;
label_15dc9c:
    // 0x15dc9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15dc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dca0: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x15dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x15dca4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15DCA4u;
    SET_GPR_U32(ctx, 31, 0x15DCACu);
    ctx->pc = 0x15DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCA4u;
    // 0x15dca8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15DCA4u, 0x15DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCACu;
label_15dcac:
    // 0x15dcac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_15dcb0:
    // 0x15dcb0: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x15DCB0u;
    {
        const bool branch_taken_0x15dcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCB0u;
        // 0x15dcb4: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcb0) {
            ctx->pc = 0x15DE48u;
            goto label_15de48;
        }
    }
    ctx->pc = 0x15DCB8u;
    // 0x15dcb8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15dcbc: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x15dcbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15dcc0: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x15dcc4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15dcc8: 0x24630350  addiu       $v1, $v1, 0x350
    ctx->pc = 0x15dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
    // 0x15dccc: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x15dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x15dcd0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dcd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15dcd8: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x15dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15dcdc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15dcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15dce0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15dce4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15dce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15dce8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x15dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dcec: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15dcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15dcf0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x15dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15dcf4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x15DCF4u;
    {
        const bool branch_taken_0x15dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCF4u;
        // 0x15dcf8: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcf4) {
            ctx->pc = 0x15DE48u;
            goto label_15de48;
        }
    }
    ctx->pc = 0x15DCFCu;
    // 0x15dcfc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15dd00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15dd04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15dd08: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x15dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x15dd0c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DD0Cu;
    {
        const bool branch_taken_0x15dd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dd0c) {
            ctx->pc = 0x15DD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DD0Cu;
            // 0x15dd10: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DD1Cu;
            goto label_15dd1c;
        }
    }
    ctx->pc = 0x15DD14u;
    // 0x15dd14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15DD14u;
    {
        const bool branch_taken_0x15dd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD14u;
        // 0x15dd18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd14) {
            ctx->pc = 0x15DD24u;
            goto label_15dd24;
        }
    }
    ctx->pc = 0x15DD1Cu;
label_15dd1c:
    // 0x15dd1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dd20: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x15dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15dd24:
    // 0x15dd24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15dd28: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15DD28u;
    SET_GPR_U32(ctx, 31, 0x15DD30u);
    ctx->pc = 0x15DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD28u;
    // 0x15dd2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15DD28u, 0x15DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD30u;
label_15dd30:
    // 0x15dd30: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x15dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15dd34: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x15dd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15dd38: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15dd3c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x15dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15dd40: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15dd40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15dd44: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15dd44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15dd48: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15dd48u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15dd4c: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x15dd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x15dd50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15dd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dd54: 0x0  nop
    ctx->pc = 0x15dd54u;
    // NOP
    // 0x15dd58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15dd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15dd5c: 0x0  nop
    ctx->pc = 0x15dd5cu;
    // NOP
    // 0x15dd60: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x15DD60u;
    {
        const bool branch_taken_0x15dd60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd60) {
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15DD68u;
    // 0x15dd68: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15dd6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dd70: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x15dd70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15dd74: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x15dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15dd78: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15DD78u;
    {
        const bool branch_taken_0x15dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD78u;
        // 0x15dd7c: 0xac430330  sw          $v1, 0x330($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd78) {
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15DD80u;
label_15dd80:
    // 0x15dd80: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x15dd80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15dd84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dd88: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x15dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15dd8c: 0xac430330  sw          $v1, 0x330($v0)
    ctx->pc = 0x15dd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 816), GPR_U32(ctx, 3));
    // 0x15dd90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dd94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15DD94u;
    {
        const bool branch_taken_0x15dd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD94u;
        // 0x15dd98: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd94) {
            ctx->pc = 0x15DDB4u;
            goto label_15ddb4;
        }
    }
    ctx->pc = 0x15DD9Cu;
    // 0x15dd9c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15dda0: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15DDA0u;
    {
        const bool branch_taken_0x15dda0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x15DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDA0u;
        // 0x15dda4: 0x2a820003  slti        $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dda0) {
            ctx->pc = 0x15DDB8u;
            goto label_15ddb8;
        }
    }
    ctx->pc = 0x15DDA8u;
    // 0x15dda8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DDA8u;
    {
        const bool branch_taken_0x15dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDA8u;
        // 0x15ddac: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dda8) {
            ctx->pc = 0x15DDBCu;
            goto label_15ddbc;
        }
    }
    ctx->pc = 0x15DDB0u;
    // 0x15ddb0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_15ddb4:
    // 0x15ddb4: 0xac43a4a8  sw          $v1, -0x5B58($v0)
    ctx->pc = 0x15ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943912), GPR_U32(ctx, 3));
label_15ddb8:
    // 0x15ddb8: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15ddbc:
    // 0x15ddbc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15ddc0: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15ddc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15ddc4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15ddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15ddc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddcc: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x15ddccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15ddd0: 0xc6010350  lwc1        $f1, 0x350($s0)
    ctx->pc = 0x15ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ddd4: 0x26020350  addiu       $v0, $s0, 0x350
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x15ddd8: 0xc6140380  lwc1        $f20, 0x380($s0)
    ctx->pc = 0x15ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15dddc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x15dddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15dde0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dde4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x15dde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15dde8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x15dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ddec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x15ddecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15ddf0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x15ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ddf4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15DDF4u;
    SET_GPR_U32(ctx, 31, 0x15DDFCu);
    ctx->pc = 0x15DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDF4u;
    // 0x15ddf8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15DDF4u, 0x15DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDFCu;
label_15ddfc:
    // 0x15ddfc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x15ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15de00: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x15de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15de04: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15de08: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x15de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15de0c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15de0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15de10: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15de10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15de14: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15de14u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15de18: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x15de18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15de1c: 0x0  nop
    ctx->pc = 0x15de1cu;
    // NOP
    // 0x15de20: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x15DE20u;
    {
        const bool branch_taken_0x15de20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15de20) {
            ctx->pc = 0x15DE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DE20u;
            // 0x15de24: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DE4Cu;
            goto label_15de4c;
        }
    }
    ctx->pc = 0x15DE28u;
    // 0x15de28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15de28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de2c: 0xc057400  jal         func_15D000
    ctx->pc = 0x15DE2Cu;
    SET_GPR_U32(ctx, 31, 0x15DE34u);
    ctx->pc = 0x15DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE2Cu;
    // 0x15de30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D000u, 0x15DE2Cu, 0x15DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE34u;
label_15de34:
    // 0x15de34: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x15de34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
    // 0x15de38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15de38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15de3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de40: 0xc056f92  jal         func_15BE48
    ctx->pc = 0x15DE40u;
    SET_GPR_U32(ctx, 31, 0x15DE48u);
    ctx->pc = 0x15DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE40u;
    // 0x15de44: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BE48u, 0x15DE40u, 0x15DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE48u;
label_15de48:
    // 0x15de48: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x15de48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15de4c:
    // 0x15de4c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x15de4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15de50: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x15de50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15de54: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x15de54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15de58: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x15de58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15de5c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x15de5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15de60: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x15de60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15de64: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x15de64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15de68: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x15de68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15de6c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x15de6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15de70: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x15de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15de74: 0x3e00008  jr          $ra
    ctx->pc = 0x15DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE74u;
        // 0x15de78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DE7Cu;
    // 0x15de7c: 0x0  nop
    ctx->pc = 0x15de7cu;
    // NOP
    ctx->pc = 0x15de80u;
}
