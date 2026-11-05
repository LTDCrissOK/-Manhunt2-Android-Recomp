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

// Function: sub_00103250
// Address: 0x103250 - 0x1033a0
void sub_00103250_0x103250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103250_0x103250");
#endif

    switch (ctx->pc) {
        case 0x103290u: goto label_103290;
        case 0x1032d0u: goto label_1032d0;
        case 0x1032d8u: goto label_1032d8;
        case 0x1032f8u: goto label_1032f8;
        case 0x103340u: goto label_103340;
        default: break;
    }

    ctx->pc = 0x103250u;

    // 0x103250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10325c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10325cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x103264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103268: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x103268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10326c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x103270: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x103270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x103274: 0x8225001c  lb          $a1, 0x1C($s1)
    ctx->pc = 0x103274u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x103278: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x103278u;
    {
        const bool branch_taken_0x103278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103278u;
        // 0x10327c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103278) {
            ctx->pc = 0x1032B8u;
            goto label_1032b8;
        }
    }
    ctx->pc = 0x103280u;
    // 0x103280: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x103280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x103284: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x103284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x103288: 0x8c4695a8  lw          $a2, -0x6A58($v0)
    ctx->pc = 0x103288u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F95A8u));
    // 0x10328c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x10328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_103290:
    // 0x103290: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x103290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103294: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x103294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x103298: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x103298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10329c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1032a0: 0x10520037  beq         $v0, $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x1032A0u;
    {
        const bool branch_taken_0x1032a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A0u;
        // 0x1032a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032a0) {
            ctx->pc = 0x103380u;
            goto label_103380;
        }
    }
    ctx->pc = 0x1032A8u;
    // 0x1032a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1032a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1032ac: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1032acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1032b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1032B0u;
    {
        const bool branch_taken_0x1032b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1032B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032B0u;
        // 0x1032b4: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032b0) {
            ctx->pc = 0x103290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103290;
        }
    }
    ctx->pc = 0x1032B8u;
label_1032b8:
    // 0x1032b8: 0x92330022  lbu         $s3, 0x22($s1)
    ctx->pc = 0x1032b8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1032bc: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1032BCu;
    {
        const bool branch_taken_0x1032bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1032C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032BCu;
        // 0x1032c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032bc) {
            ctx->pc = 0x10337Cu;
            goto label_10337c;
        }
    }
    ctx->pc = 0x1032C4u;
    // 0x1032c4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1032c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1032c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1032c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1032cc: 0x0  nop
    ctx->pc = 0x1032ccu;
    // NOP
label_1032d0:
    // 0x1032d0: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1032D0u;
    SET_GPR_U32(ctx, 31, 0x1032D8u);
    ctx->pc = 0x1032D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1032D0u;
    // 0x1032d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1032D0u, 0x1032D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032D8u;
label_1032d8:
    // 0x1032d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1032d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1032dc: 0x80c50010  lb          $a1, 0x10($a2)
    ctx->pc = 0x1032dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1032e0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1032E0u;
    {
        const bool branch_taken_0x1032e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1032E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E0u;
        // 0x1032e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032e0) {
            ctx->pc = 0x103324u;
            goto label_103324;
        }
    }
    ctx->pc = 0x1032E8u;
    // 0x1032e8: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1032e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1032ec: 0x8e8795a8  lw          $a3, -0x6A58($s4)
    ctx->pc = 0x1032ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940072)));
    // 0x1032f0: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x1032f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1032f4: 0x0  nop
    ctx->pc = 0x1032f4u;
    // NOP
label_1032f8:
    // 0x1032f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1032f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1032fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1032fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x103300: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x103300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x103304: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103308: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x103308u;
    {
        const bool branch_taken_0x103308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x103308) {
            ctx->pc = 0x10330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103308u;
            // 0x10330c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103318u;
            goto label_103318;
        }
    }
    ctx->pc = 0x103310u;
    // 0x103310: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x103310u;
    {
        const bool branch_taken_0x103310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103310u;
        // 0x103314: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103310) {
            ctx->pc = 0x103380u;
            goto label_103380;
        }
    }
    ctx->pc = 0x103318u;
label_103318:
    // 0x103318: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x103318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x10331c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10331Cu;
    {
        const bool branch_taken_0x10331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10331Cu;
        // 0x103320: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10331c) {
            ctx->pc = 0x1032F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1032f8;
        }
    }
    ctx->pc = 0x103324u;
label_103324:
    // 0x103324: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x103324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x103328: 0x80c5001c  lb          $a1, 0x1C($a2)
    ctx->pc = 0x103328u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x10332c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x10332Cu;
    {
        const bool branch_taken_0x10332c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x103330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10332Cu;
        // 0x103330: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10332c) {
            ctx->pc = 0x10336Cu;
            goto label_10336c;
        }
    }
    ctx->pc = 0x103334u;
    // 0x103334: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x103334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x103338: 0x8e8795a8  lw          $a3, -0x6A58($s4)
    ctx->pc = 0x103338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940072)));
    // 0x10333c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x10333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_103340:
    // 0x103340: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x103340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103344: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x103344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x103348: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x103348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x10334c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103350: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x103350u;
    {
        const bool branch_taken_0x103350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x103350) {
            ctx->pc = 0x103354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103350u;
            // 0x103354: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103360u;
            goto label_103360;
        }
    }
    ctx->pc = 0x103358u;
    // 0x103358: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x103358u;
    {
        const bool branch_taken_0x103358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103358u;
        // 0x10335c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103358) {
            ctx->pc = 0x103380u;
            goto label_103380;
        }
    }
    ctx->pc = 0x103360u;
label_103360:
    // 0x103360: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x103360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x103364: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x103364u;
    {
        const bool branch_taken_0x103364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103364u;
        // 0x103368: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103364) {
            ctx->pc = 0x103340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103340;
        }
    }
    ctx->pc = 0x10336Cu;
label_10336c:
    // 0x10336c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10336cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x103370: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x103370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x103374: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x103374u;
    {
        const bool branch_taken_0x103374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103374) {
            ctx->pc = 0x103378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103374u;
            // 0x103378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1032D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1032d0;
        }
    }
    ctx->pc = 0x10337Cu;
label_10337c:
    // 0x10337c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10337cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103380:
    // 0x103380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10338c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10338cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103390: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x103390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103394: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x103394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x103398: 0x3e00008  jr          $ra
    ctx->pc = 0x103398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103398u;
        // 0x10339c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1033A0u;
}
