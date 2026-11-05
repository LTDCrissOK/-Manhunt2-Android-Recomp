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

// Function: sub_00160190
// Address: 0x160190 - 0x160430
void sub_00160190_0x160190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160190_0x160190");
#endif

    switch (ctx->pc) {
        case 0x1601d4u: goto label_1601d4;
        case 0x160220u: goto label_160220;
        case 0x160228u: goto label_160228;
        case 0x160258u: goto label_160258;
        case 0x160274u: goto label_160274;
        case 0x160280u: goto label_160280;
        case 0x160290u: goto label_160290;
        case 0x1602d4u: goto label_1602d4;
        case 0x1602f4u: goto label_1602f4;
        case 0x160344u: goto label_160344;
        case 0x160350u: goto label_160350;
        case 0x160368u: goto label_160368;
        case 0x160388u: goto label_160388;
        case 0x160394u: goto label_160394;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603bcu: goto label_1603bc;
        case 0x1603ccu: goto label_1603cc;
        case 0x1603e8u: goto label_1603e8;
        default: break;
    }

    ctx->pc = 0x160190u;

    // 0x160190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x160190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x160194: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x160194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x160198: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x160198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16019c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1601a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1601a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601a4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1601a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1601a8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1601a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1601ac: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1601acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1601b0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1601b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1601b4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1601b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1601b8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1601b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1601bc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1601bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1601c0: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1601c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1601c4: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1601C4u;
    {
        const bool branch_taken_0x1601c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1601C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601C4u;
        // 0x1601c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601c4) {
            ctx->pc = 0x1603FCu;
            goto label_1603fc;
        }
    }
    ctx->pc = 0x1601CCu;
    // 0x1601cc: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x1601CCu;
    SET_GPR_U32(ctx, 31, 0x1601D4u);
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x1601CCu, 0x1601D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1601D4u;
label_1601d4:
    // 0x1601d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1601d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601d8: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x1601D8u;
    {
        const bool branch_taken_0x1601d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1601DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601D8u;
        // 0x1601dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601d8) {
            ctx->pc = 0x1603FCu;
            goto label_1603fc;
        }
    }
    ctx->pc = 0x1601E0u;
    // 0x1601e0: 0x10620086  beq         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1601E0u;
    {
        const bool branch_taken_0x1601e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1601E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601E0u;
        // 0x1601e4: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601e0) {
            ctx->pc = 0x1603FCu;
            goto label_1603fc;
        }
    }
    ctx->pc = 0x1601E8u;
    // 0x1601e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1601e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1601ec: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1601ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1601f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1601f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1601f4: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1601f8: 0x50400081  beql        $v0, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x1601F8u;
    {
        const bool branch_taken_0x1601f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1601f8) {
            ctx->pc = 0x1601FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1601F8u;
            // 0x1601fc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160400u;
            goto label_160400;
        }
    }
    ctx->pc = 0x160200u;
    // 0x160200: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x160200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x160204: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x160208: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16020c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x160210: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x160210u;
    {
        const bool branch_taken_0x160210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160210) {
            ctx->pc = 0x160214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160210u;
            // 0x160214: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160230u;
            goto label_160230;
        }
    }
    ctx->pc = 0x160218u;
    // 0x160218: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x160218u;
    {
        const bool branch_taken_0x160218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160218u;
        // 0x16021c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160218) {
            ctx->pc = 0x160238u;
            goto label_160238;
        }
    }
    ctx->pc = 0x160220u;
label_160220:
    // 0x160220: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x160220u;
    SET_GPR_U32(ctx, 31, 0x160228u);
    ctx->pc = 0x160224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160220u;
    // 0x160224: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x160220u, 0x160228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160228u;
label_160228:
    // 0x160228: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x160228u;
    {
        const bool branch_taken_0x160228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160228u;
        // 0x16022c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160228) {
            ctx->pc = 0x160400u;
            goto label_160400;
        }
    }
    ctx->pc = 0x160230u;
label_160230:
    // 0x160230: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160234: 0x24770070  addiu       $s7, $v1, 0x70
    ctx->pc = 0x160234u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_160238:
    // 0x160238: 0x12e00070  beqz        $s7, . + 4 + (0x70 << 2)
    ctx->pc = 0x160238u;
    {
        const bool branch_taken_0x160238 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x16023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160238u;
        // 0x16023c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160238) {
            ctx->pc = 0x1603FCu;
            goto label_1603fc;
        }
    }
    ctx->pc = 0x160240u;
    // 0x160240: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x160240u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160244: 0x245e9a08  addiu       $fp, $v0, -0x65F8
    ctx->pc = 0x160244u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x160248: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x160248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16024c: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x16024cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x160250: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x160254: 0x0  nop
    ctx->pc = 0x160254u;
    // NOP
label_160258:
    // 0x160258: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x160258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x16025c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160260: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x160260u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160264: 0x12600061  beqz        $s3, . + 4 + (0x61 << 2)
    ctx->pc = 0x160264u;
    {
        const bool branch_taken_0x160264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x160268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160264u;
        // 0x160268: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160264) {
            ctx->pc = 0x1603ECu;
            goto label_1603ec;
        }
    }
    ctx->pc = 0x16026Cu;
    // 0x16026c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16026Cu;
    SET_GPR_U32(ctx, 31, 0x160274u);
    ctx->pc = 0x160270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16026Cu;
    // 0x160270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16026Cu, 0x160274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160274u;
label_160274:
    // 0x160274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x160274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160278: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x160278u;
    SET_GPR_U32(ctx, 31, 0x160280u);
    ctx->pc = 0x16027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160278u;
    // 0x16027c: 0x2405fffb  addiu       $a1, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x160278u, 0x160280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160280u;
label_160280:
    // 0x160280: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x160280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160288: 0xc056af8  jal         func_15ABE0
    ctx->pc = 0x160288u;
    SET_GPR_U32(ctx, 31, 0x160290u);
    ctx->pc = 0x16028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160288u;
    // 0x16028c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABE0u, 0x160288u, 0x160290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160290u;
label_160290:
    // 0x160290: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x160290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x160294: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x160294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x160298: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x160298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16029c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1602a0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1602a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1602a4: 0x24429b10  addiu       $v0, $v0, -0x64F0
    ctx->pc = 0x1602a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x1602a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1602a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1602ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1602b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1602b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1602b4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1602B4u;
    {
        const bool branch_taken_0x1602b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1602b4) {
            ctx->pc = 0x1602B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1602B4u;
            // 0x1602b8: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1602C4u;
            goto label_1602c4;
        }
    }
    ctx->pc = 0x1602BCu;
    // 0x1602bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1602BCu;
    {
        const bool branch_taken_0x1602bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602BCu;
        // 0x1602c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602bc) {
            ctx->pc = 0x1602CCu;
            goto label_1602cc;
        }
    }
    ctx->pc = 0x1602C4u;
label_1602c4:
    // 0x1602c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1602c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1602c8: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x1602c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1602cc:
    // 0x1602cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1602CCu;
    SET_GPR_U32(ctx, 31, 0x1602D4u);
    ctx->pc = 0x1602D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602CCu;
    // 0x1602d0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1602CCu, 0x1602D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602D4u;
label_1602d4:
    // 0x1602d4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1602d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1602d8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1602d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1602dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1602dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1602e0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1602e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1602e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1602e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602e8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1602e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602ec: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x1602ECu;
    SET_GPR_U32(ctx, 31, 0x1602F4u);
    ctx->pc = 0x1602F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602ECu;
    // 0x1602f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x1602ECu, 0x1602F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602F4u;
label_1602f4:
    // 0x1602f4: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x1602f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1602f8: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x1602f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1602fc: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x1602fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x160300: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x160300u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x160304: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x160304u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x160308: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x160308u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x16030c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x16030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x160310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x160310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160314: 0x0  nop
    ctx->pc = 0x160314u;
    // NOP
    // 0x160318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16031c: 0x0  nop
    ctx->pc = 0x16031cu;
    // NOP
    // 0x160320: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x160320u;
    {
        const bool branch_taken_0x160320 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x160324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160320u;
        // 0x160324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160320) {
            ctx->pc = 0x16032Cu;
            goto label_16032c;
        }
    }
    ctx->pc = 0x160328u;
    // 0x160328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16032c:
    // 0x16032c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16032Cu;
    {
        const bool branch_taken_0x16032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16032Cu;
        // 0x160330: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16032c) {
            ctx->pc = 0x16039Cu;
            goto label_16039c;
        }
    }
    ctx->pc = 0x160334u;
    // 0x160334: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x160334u;
    {
        const bool branch_taken_0x160334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160334u;
        // 0x160338: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160334) {
            ctx->pc = 0x16039Cu;
            goto label_16039c;
        }
    }
    ctx->pc = 0x16033Cu;
    // 0x16033c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16033Cu;
    SET_GPR_U32(ctx, 31, 0x160344u);
    ctx->pc = 0x160340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16033Cu;
    // 0x160340: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16033Cu, 0x160344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160344u;
label_160344:
    // 0x160344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160348: 0xc056b2c  jal         func_15ACB0
    ctx->pc = 0x160348u;
    SET_GPR_U32(ctx, 31, 0x160350u);
    ctx->pc = 0x16034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160348u;
    // 0x16034c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ACB0u, 0x160348u, 0x160350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160350u;
label_160350:
    // 0x160350: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x160350u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x160354: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x160354u;
    {
        const bool branch_taken_0x160354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x160358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160354u;
        // 0x160358: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160354) {
            ctx->pc = 0x160378u;
            goto label_160378;
        }
    }
    ctx->pc = 0x16035Cu;
    // 0x16035c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16035cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160360: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x160360u;
    SET_GPR_U32(ctx, 31, 0x160368u);
    ctx->pc = 0x160364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160360u;
    // 0x160364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x160360u, 0x160368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160368u;
label_160368:
    // 0x160368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16036c: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x16036cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x160370: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160370u;
    {
        const bool branch_taken_0x160370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160370u;
        // 0x160374: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160370) {
            ctx->pc = 0x160388u;
            goto label_160388;
        }
    }
    ctx->pc = 0x160378u;
label_160378:
    // 0x160378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16037c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16037cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160380: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x160380u;
    SET_GPR_U32(ctx, 31, 0x160388u);
    ctx->pc = 0x160384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160380u;
    // 0x160384: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x160380u, 0x160388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160388u;
label_160388:
    // 0x160388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16038c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16038Cu;
    SET_GPR_U32(ctx, 31, 0x160394u);
    ctx->pc = 0x160390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16038Cu;
    // 0x160390: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16038Cu, 0x160394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160394u;
label_160394:
    // 0x160394: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x160394u;
    {
        const bool branch_taken_0x160394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160394u;
        // 0x160398: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160394) {
            ctx->pc = 0x1603B4u;
            goto label_1603b4;
        }
    }
    ctx->pc = 0x16039Cu;
label_16039c:
    // 0x16039c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16039cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1603a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603a4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1603a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1603a8: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x1603A8u;
    SET_GPR_U32(ctx, 31, 0x1603B0u);
    ctx->pc = 0x1603ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603A8u;
    // 0x1603ac: 0x24070036  addiu       $a3, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x1603A8u, 0x1603B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603B0u;
label_1603b0:
    // 0x1603b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1603b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1603b4:
    // 0x1603b4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1603B4u;
    SET_GPR_U32(ctx, 31, 0x1603BCu);
    ctx->pc = 0x1603B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603B4u;
    // 0x1603b8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1603B4u, 0x1603BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603BCu;
label_1603bc:
    // 0x1603bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1603bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1603c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603c4: 0xc056b26  jal         func_15AC98
    ctx->pc = 0x1603C4u;
    SET_GPR_U32(ctx, 31, 0x1603CCu);
    ctx->pc = 0x1603C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603C4u;
    // 0x1603c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC98u, 0x1603C4u, 0x1603CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603CCu;
label_1603cc:
    // 0x1603cc: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1603ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1603d0: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x1603d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1603d4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1603d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1603d8: 0x12a3ff91  beq         $s5, $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x1603D8u;
    {
        const bool branch_taken_0x1603d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x1603DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603D8u;
        // 0x1603dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603d8) {
            ctx->pc = 0x160220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160220;
        }
    }
    ctx->pc = 0x1603E0u;
    // 0x1603e0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1603E0u;
    SET_GPR_U32(ctx, 31, 0x1603E8u);
    ctx->pc = 0x1603E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603E0u;
    // 0x1603e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1603E0u, 0x1603E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603E8u;
label_1603e8:
    // 0x1603e8: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1603ec:
    // 0x1603ec: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1603ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1603f0: 0x2e830010  sltiu       $v1, $s4, 0x10
    ctx->pc = 0x1603f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1603f4: 0x5460ff98  bnel        $v1, $zero, . + 4 + (-0x68 << 2)
    ctx->pc = 0x1603F4u;
    {
        const bool branch_taken_0x1603f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1603f4) {
            ctx->pc = 0x1603F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1603F4u;
            // 0x1603f8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160258;
        }
    }
    ctx->pc = 0x1603FCu;
label_1603fc:
    // 0x1603fc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1603fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_160400:
    // 0x160400: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x160400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x160404: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x160404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160408: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x160408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16040c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x16040cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160410: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x160410u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x160414: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x160414u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160418: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x160418u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16041c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x16041cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160420: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x160420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x160424: 0x3e00008  jr          $ra
    ctx->pc = 0x160424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160424u;
        // 0x160428: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16042Cu;
    // 0x16042c: 0x0  nop
    ctx->pc = 0x16042cu;
    // NOP
    ctx->pc = 0x160430u;
}
