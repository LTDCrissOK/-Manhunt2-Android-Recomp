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

// Function: sub_001501C8
// Address: 0x1501c8 - 0x150308
void sub_001501C8_0x1501c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001501C8_0x1501c8");
#endif

    switch (ctx->pc) {
        case 0x1501c8u: goto label_1501c8;
        case 0x1501ccu: goto label_1501cc;
        case 0x1501d0u: goto label_1501d0;
        case 0x1501d4u: goto label_1501d4;
        case 0x1501d8u: goto label_1501d8;
        case 0x1501dcu: goto label_1501dc;
        case 0x1501e0u: goto label_1501e0;
        case 0x1501e4u: goto label_1501e4;
        case 0x1501e8u: goto label_1501e8;
        case 0x1501ecu: goto label_1501ec;
        case 0x1501f0u: goto label_1501f0;
        case 0x1501f4u: goto label_1501f4;
        case 0x1501f8u: goto label_1501f8;
        case 0x1501fcu: goto label_1501fc;
        case 0x150200u: goto label_150200;
        case 0x150204u: goto label_150204;
        case 0x150208u: goto label_150208;
        case 0x15020cu: goto label_15020c;
        case 0x150210u: goto label_150210;
        case 0x150214u: goto label_150214;
        case 0x150218u: goto label_150218;
        case 0x15021cu: goto label_15021c;
        case 0x150220u: goto label_150220;
        case 0x150224u: goto label_150224;
        case 0x150228u: goto label_150228;
        case 0x15022cu: goto label_15022c;
        case 0x150230u: goto label_150230;
        case 0x150234u: goto label_150234;
        case 0x150238u: goto label_150238;
        case 0x15023cu: goto label_15023c;
        case 0x150240u: goto label_150240;
        case 0x150244u: goto label_150244;
        case 0x150248u: goto label_150248;
        case 0x15024cu: goto label_15024c;
        case 0x150250u: goto label_150250;
        case 0x150254u: goto label_150254;
        case 0x150258u: goto label_150258;
        case 0x15025cu: goto label_15025c;
        case 0x150260u: goto label_150260;
        case 0x150264u: goto label_150264;
        case 0x150268u: goto label_150268;
        case 0x15026cu: goto label_15026c;
        case 0x150270u: goto label_150270;
        case 0x150274u: goto label_150274;
        case 0x150278u: goto label_150278;
        case 0x15027cu: goto label_15027c;
        case 0x150280u: goto label_150280;
        case 0x150284u: goto label_150284;
        case 0x150288u: goto label_150288;
        case 0x15028cu: goto label_15028c;
        case 0x150290u: goto label_150290;
        case 0x150294u: goto label_150294;
        case 0x150298u: goto label_150298;
        case 0x15029cu: goto label_15029c;
        case 0x1502a0u: goto label_1502a0;
        case 0x1502a4u: goto label_1502a4;
        case 0x1502a8u: goto label_1502a8;
        case 0x1502acu: goto label_1502ac;
        case 0x1502b0u: goto label_1502b0;
        case 0x1502b4u: goto label_1502b4;
        case 0x1502b8u: goto label_1502b8;
        case 0x1502bcu: goto label_1502bc;
        case 0x1502c0u: goto label_1502c0;
        case 0x1502c4u: goto label_1502c4;
        case 0x1502c8u: goto label_1502c8;
        case 0x1502ccu: goto label_1502cc;
        case 0x1502d0u: goto label_1502d0;
        case 0x1502d4u: goto label_1502d4;
        case 0x1502d8u: goto label_1502d8;
        case 0x1502dcu: goto label_1502dc;
        case 0x1502e0u: goto label_1502e0;
        case 0x1502e4u: goto label_1502e4;
        case 0x1502e8u: goto label_1502e8;
        case 0x1502ecu: goto label_1502ec;
        case 0x1502f0u: goto label_1502f0;
        case 0x1502f4u: goto label_1502f4;
        case 0x1502f8u: goto label_1502f8;
        case 0x1502fcu: goto label_1502fc;
        case 0x150300u: goto label_150300;
        case 0x150304u: goto label_150304;
        default: break;
    }

    ctx->pc = 0x1501c8u;

label_1501c8:
    // 0x1501c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1501c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1501cc:
    // 0x1501cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1501ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1501d0:
    // 0x1501d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1501d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1501d4:
    // 0x1501d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1501d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1501d8:
    // 0x1501d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1501d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1501dc:
    // 0x1501dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1501dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1501e0:
    // 0x1501e0: 0x8e4208d4  lw          $v0, 0x8D4($s2)
    ctx->pc = 0x1501e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2260)));
label_1501e4:
    // 0x1501e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1501e8:
    if (ctx->pc == 0x1501E8u) {
        ctx->pc = 0x1501E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501E4u;
        // 0x1501e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1501ECu;
        goto label_1501ec;
    }
    ctx->pc = 0x1501E4u;
    {
        const bool branch_taken_0x1501e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1501E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501E4u;
        // 0x1501e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501e4) {
            ctx->pc = 0x1501FCu;
            goto label_1501fc;
        }
    }
    ctx->pc = 0x1501ECu;
label_1501ec:
    // 0x1501ec: 0xc053de0  jal         func_14F780
label_1501f0:
    if (ctx->pc == 0x1501F0u) {
        ctx->pc = 0x1501F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501ECu;
        // 0x1501f0: 0xae4208a0  sw          $v0, 0x8A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1501F4u;
        goto label_1501f4;
    }
    ctx->pc = 0x1501ECu;
    SET_GPR_U32(ctx, 31, 0x1501F4u);
    ctx->pc = 0x1501F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501ECu;
    // 0x1501f0: 0xae4208a0  sw          $v0, 0x8A0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F780u, 0x1501ECu, 0x1501F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501F4u;
label_1501f4:
    // 0x1501f4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1501f8:
    if (ctx->pc == 0x1501F8u) {
        ctx->pc = 0x1501F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501F4u;
        // 0x1501f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1501FCu;
        goto label_1501fc;
    }
    ctx->pc = 0x1501F4u;
    {
        const bool branch_taken_0x1501f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1501F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501F4u;
        // 0x1501f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501f4) {
            ctx->pc = 0x1502F4u;
            goto label_1502f4;
        }
    }
    ctx->pc = 0x1501FCu;
label_1501fc:
    // 0x1501fc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1501fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
label_150200:
    // 0x150200: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x150200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_150204:
    // 0x150204: 0xc04d8d6  jal         func_136358
label_150208:
    if (ctx->pc == 0x150208u) {
        ctx->pc = 0x150208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150204u;
        // 0x150208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15020Cu;
        goto label_15020c;
    }
    ctx->pc = 0x150204u;
    SET_GPR_U32(ctx, 31, 0x15020Cu);
    ctx->pc = 0x150208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150204u;
    // 0x150208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x150204u, 0x15020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15020Cu;
label_15020c:
    // 0x15020c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x15020cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
label_150210:
    // 0x150210: 0xc04d8e2  jal         func_136388
label_150214:
    if (ctx->pc == 0x150214u) {
        ctx->pc = 0x150214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150210u;
        // 0x150214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150218u;
        goto label_150218;
    }
    ctx->pc = 0x150210u;
    SET_GPR_U32(ctx, 31, 0x150218u);
    ctx->pc = 0x150214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150210u;
    // 0x150214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x150210u, 0x150218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150218u;
label_150218:
    // 0x150218: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x150218u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
label_15021c:
    // 0x15021c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_150220:
    // 0x150220: 0xc053b00  jal         func_14EC00
label_150224:
    if (ctx->pc == 0x150224u) {
        ctx->pc = 0x150224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150220u;
        // 0x150224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150228u;
        goto label_150228;
    }
    ctx->pc = 0x150220u;
    SET_GPR_U32(ctx, 31, 0x150228u);
    ctx->pc = 0x150224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150220u;
    // 0x150224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x150220u, 0x150228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150228u;
label_150228:
    // 0x150228: 0x8e5008c0  lw          $s0, 0x8C0($s2)
    ctx->pc = 0x150228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2240)));
label_15022c:
    // 0x15022c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_150230:
    if (ctx->pc == 0x150230u) {
        ctx->pc = 0x150230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15022Cu;
        // 0x150230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150234u;
        goto label_150234;
    }
    ctx->pc = 0x15022Cu;
    {
        const bool branch_taken_0x15022c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x150230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15022Cu;
        // 0x150230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15022c) {
            ctx->pc = 0x15024Cu;
            goto label_15024c;
        }
    }
    ctx->pc = 0x150234u;
label_150234:
    // 0x150234: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x150234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_150238:
    // 0x150238: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x150238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15023c:
    // 0x15023c: 0x40f809  jalr        $v0
label_150240:
    if (ctx->pc == 0x150240u) {
        ctx->pc = 0x150240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15023Cu;
        // 0x150240: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150244u;
        goto label_150244;
    }
    ctx->pc = 0x15023Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150244u);
        ctx->pc = 0x150240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15023Cu;
        // 0x150240: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15023Cu, 0x150244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x150244u;
label_150244:
    // 0x150244: 0x1000002b  b           . + 4 + (0x2B << 2)
label_150248:
    if (ctx->pc == 0x150248u) {
        ctx->pc = 0x150248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150244u;
        // 0x150248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15024Cu;
        goto label_15024c;
    }
    ctx->pc = 0x150244u;
    {
        const bool branch_taken_0x150244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150244u;
        // 0x150248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150244) {
            ctx->pc = 0x1502F4u;
            goto label_1502f4;
        }
    }
    ctx->pc = 0x15024Cu;
label_15024c:
    // 0x15024c: 0xc04da9c  jal         func_136A70
label_150250:
    if (ctx->pc == 0x150250u) {
        ctx->pc = 0x150250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15024Cu;
        // 0x150250: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150254u;
        goto label_150254;
    }
    ctx->pc = 0x15024Cu;
    SET_GPR_U32(ctx, 31, 0x150254u);
    ctx->pc = 0x150250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15024Cu;
    // 0x150250: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x15024Cu, 0x150254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150254u;
label_150254:
    // 0x150254: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_150258:
    // 0x150258: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x150258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15025c:
    // 0x15025c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15025cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150260:
    // 0x150260: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x150260u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150264:
    // 0x150264: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x150264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_150268:
    // 0x150268: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x150268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15026c:
    // 0x15026c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_150270:
    // 0x150270: 0xc04daca  jal         func_136B28
label_150274:
    if (ctx->pc == 0x150274u) {
        ctx->pc = 0x150274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150270u;
        // 0x150274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150278u;
        goto label_150278;
    }
    ctx->pc = 0x150270u;
    SET_GPR_U32(ctx, 31, 0x150278u);
    ctx->pc = 0x150274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150270u;
    // 0x150274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x150270u, 0x150278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150278u;
label_150278:
    // 0x150278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x150278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15027c:
    // 0x15027c: 0xc045fea  jal         func_117FA8
label_150280:
    if (ctx->pc == 0x150280u) {
        ctx->pc = 0x150280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15027Cu;
        // 0x150280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150284u;
        goto label_150284;
    }
    ctx->pc = 0x15027Cu;
    SET_GPR_U32(ctx, 31, 0x150284u);
    ctx->pc = 0x150280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15027Cu;
    // 0x150280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15027Cu, 0x150284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150284u;
label_150284:
    // 0x150284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150288:
    // 0x150288: 0xc046104  jal         func_118410
label_15028c:
    if (ctx->pc == 0x15028Cu) {
        ctx->pc = 0x15028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150288u;
        // 0x15028c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150290u;
        goto label_150290;
    }
    ctx->pc = 0x150288u;
    SET_GPR_U32(ctx, 31, 0x150290u);
    ctx->pc = 0x15028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150288u;
    // 0x15028c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x150288u, 0x150290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150290u;
label_150290:
    // 0x150290: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x150290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_150294:
    // 0x150294: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x150294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_150298:
    // 0x150298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x150298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15029c:
    // 0x15029c: 0xc046290  jal         func_118A40
label_1502a0:
    if (ctx->pc == 0x1502A0u) {
        ctx->pc = 0x1502A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15029Cu;
        // 0x1502a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1502A4u;
        goto label_1502a4;
    }
    ctx->pc = 0x15029Cu;
    SET_GPR_U32(ctx, 31, 0x1502A4u);
    ctx->pc = 0x1502A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15029Cu;
    // 0x1502a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x15029Cu, 0x1502A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502A4u;
label_1502a4:
    // 0x1502a4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1502a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
label_1502a8:
    // 0x1502a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1502a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1502ac:
    // 0x1502ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1502acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1502b0:
    // 0x1502b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1502b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1502b4:
    // 0x1502b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1502b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1502b8:
    // 0x1502b8: 0xc04d8f8  jal         func_1363E0
label_1502bc:
    if (ctx->pc == 0x1502BCu) {
        ctx->pc = 0x1502BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502B8u;
        // 0x1502bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1502C0u;
        goto label_1502c0;
    }
    ctx->pc = 0x1502B8u;
    SET_GPR_U32(ctx, 31, 0x1502C0u);
    ctx->pc = 0x1502BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502B8u;
    // 0x1502bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1502B8u, 0x1502C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502C0u;
label_1502c0:
    // 0x1502c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1502c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1502c4:
    // 0x1502c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1502c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1502c8:
    // 0x1502c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1502c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1502cc:
    // 0x1502cc: 0xc04dae2  jal         func_136B88
label_1502d0:
    if (ctx->pc == 0x1502D0u) {
        ctx->pc = 0x1502D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502CCu;
        // 0x1502d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1502D4u;
        goto label_1502d4;
    }
    ctx->pc = 0x1502CCu;
    SET_GPR_U32(ctx, 31, 0x1502D4u);
    ctx->pc = 0x1502D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502CCu;
    // 0x1502d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1502CCu, 0x1502D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502D4u;
label_1502d4:
    // 0x1502d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1502d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1502d8:
    // 0x1502d8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1502d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1502dc:
    // 0x1502dc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1502dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_1502e0:
    // 0x1502e0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1502e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1502e4:
    // 0x1502e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1502e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1502e8:
    // 0x1502e8: 0xc043c56  jal         func_10F158
label_1502ec:
    if (ctx->pc == 0x1502ECu) {
        ctx->pc = 0x1502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502E8u;
        // 0x1502ec: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1502F0u;
        goto label_1502f0;
    }
    ctx->pc = 0x1502E8u;
    SET_GPR_U32(ctx, 31, 0x1502F0u);
    ctx->pc = 0x1502ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502E8u;
    // 0x1502ec: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1502E8u, 0x1502F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502F0u;
label_1502f0:
    // 0x1502f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1502f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1502f4:
    // 0x1502f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1502f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1502f8:
    // 0x1502f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1502f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1502fc:
    // 0x1502fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1502fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_150300:
    // 0x150300: 0x3e00008  jr          $ra
label_150304:
    if (ctx->pc == 0x150304u) {
        ctx->pc = 0x150304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150300u;
        // 0x150304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150308u;
        goto label_fallthrough_0x150300;
    }
    ctx->pc = 0x150300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150300u;
        // 0x150304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x150300:
    ctx->pc = 0x150308u;
}
