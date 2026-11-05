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

// Function: sub_001EB1A0
// Address: 0x1eb1a0 - 0x1eb2b8
void sub_001EB1A0_0x1eb1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB1A0_0x1eb1a0");
#endif

    switch (ctx->pc) {
        case 0x1eb1f0u: goto label_1eb1f0;
        case 0x1eb23cu: goto label_1eb23c;
        case 0x1eb260u: goto label_1eb260;
        case 0x1eb26cu: goto label_1eb26c;
        case 0x1eb290u: goto label_1eb290;
        case 0x1eb298u: goto label_1eb298;
        default: break;
    }

    ctx->pc = 0x1eb1a0u;

    // 0x1eb1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb1a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eb1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eb1a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eb1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eb1ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eb1b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eb1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eb1b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1eb1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1eb1bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1eb1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1eb1c0: 0x92230960  lbu         $v1, 0x960($s1)
    ctx->pc = 0x1eb1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2400)));
    // 0x1eb1c4: 0x92220961  lbu         $v0, 0x961($s1)
    ctx->pc = 0x1eb1c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2401)));
    // 0x1eb1c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb1cc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1eb1ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb1d0: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x1EB1D0u;
    {
        const bool branch_taken_0x1eb1d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1D0u;
        // 0x1eb1d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1d0) {
            ctx->pc = 0x1EB29Cu;
            goto label_1eb29c;
        }
    }
    ctx->pc = 0x1EB1D8u;
    // 0x1eb1d8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EB1D8u;
    {
        const bool branch_taken_0x1eb1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1D8u;
        // 0x1eb1dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1d8) {
            ctx->pc = 0x1EB254u;
            goto label_1eb254;
        }
    }
    ctx->pc = 0x1EB1E0u;
    // 0x1eb1e0: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1eb1e4: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x1eb1e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x1eb1e8: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x1eb1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb1ec: 0x0  nop
    ctx->pc = 0x1eb1ecu;
    // NOP
label_1eb1f0:
    // 0x1eb1f0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1eb1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb1f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1eb1f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb1f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1eb1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1eb1fc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1EB1FCu;
    {
        const bool branch_taken_0x1eb1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1fc) {
            ctx->pc = 0x1EB200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB1FCu;
            // 0x1eb200: 0x2121818  mult        $v1, $s0, $s2 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB228u;
            goto label_1eb228;
        }
    }
    ctx->pc = 0x1EB204u;
    // 0x1eb204: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1eb204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb208: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1eb208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1eb20c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB20Cu;
    {
        const bool branch_taken_0x1eb20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb20c) {
            ctx->pc = 0x1EB210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB20Cu;
            // 0x1eb210: 0x2121818  mult        $v1, $s0, $s2 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB228u;
            goto label_1eb228;
        }
    }
    ctx->pc = 0x1EB214u;
    // 0x1eb214: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1eb214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb218: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1eb218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1eb21c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB21Cu;
    {
        const bool branch_taken_0x1eb21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB21Cu;
        // 0x1eb220: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb21c) {
            ctx->pc = 0x1EB240u;
            goto label_1eb240;
        }
    }
    ctx->pc = 0x1EB224u;
    // 0x1eb224: 0x2121818  mult        $v1, $s0, $s2
    ctx->pc = 0x1eb224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1eb228:
    // 0x1eb228: 0x26840480  addiu       $a0, $s4, 0x480
    ctx->pc = 0x1eb228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
    // 0x1eb22c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eb22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb230: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1eb230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1eb234: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1EB234u;
    SET_GPR_U32(ctx, 31, 0x1EB23Cu);
    ctx->pc = 0x1EB238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB234u;
    // 0x1eb238: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1EB234u, 0x1EB23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB23Cu;
label_1eb23c:
    // 0x1eb23c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eb240:
    // 0x1eb240: 0x92220960  lbu         $v0, 0x960($s1)
    ctx->pc = 0x1eb240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2400)));
    // 0x1eb244: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1eb244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb248: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1eb248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eb24c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1EB24Cu;
    {
        const bool branch_taken_0x1eb24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB24Cu;
        // 0x1eb250: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb24c) {
            ctx->pc = 0x1EB1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb1f0;
        }
    }
    ctx->pc = 0x1EB254u;
label_1eb254:
    // 0x1eb254: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1eb254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1eb258: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB258u;
    {
        const bool branch_taken_0x1eb258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB258u;
        // 0x1eb25c: 0x24120050  addiu       $s2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb258) {
            ctx->pc = 0x1EB288u;
            goto label_1eb288;
        }
    }
    ctx->pc = 0x1EB260u;
label_1eb260:
    // 0x1eb260: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x1eb260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb264: 0xc07ac3c  jal         func_1EB0F0
    ctx->pc = 0x1EB264u;
    SET_GPR_U32(ctx, 31, 0x1EB26Cu);
    ctx->pc = 0x1EB268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB264u;
    // 0x1eb268: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB0F0u, 0x1EB264u, 0x1EB26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB26Cu;
label_1eb26c:
    // 0x1eb26c: 0x92230961  lbu         $v1, 0x961($s1)
    ctx->pc = 0x1eb26cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2401)));
    // 0x1eb270: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1eb270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1eb274: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1eb274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb278: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eb278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eb27c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1eb27cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1eb280: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EB280u;
    {
        const bool branch_taken_0x1eb280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB280u;
        // 0x1eb284: 0xa2230961  sb          $v1, 0x961($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2401), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb280) {
            ctx->pc = 0x1EB260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb260;
        }
    }
    ctx->pc = 0x1EB288u;
label_1eb288:
    // 0x1eb288: 0xc07ac4c  jal         func_1EB130
    ctx->pc = 0x1EB288u;
    SET_GPR_U32(ctx, 31, 0x1EB290u);
    ctx->pc = 0x1EB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB288u;
    // 0x1eb28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB130u, 0x1EB288u, 0x1EB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB290u;
label_1eb290:
    // 0x1eb290: 0xc07abfe  jal         func_1EAFF8
    ctx->pc = 0x1EB290u;
    SET_GPR_U32(ctx, 31, 0x1EB298u);
    ctx->pc = 0x1EB294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB290u;
    // 0x1eb294: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFF8u, 0x1EB290u, 0x1EB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB298u;
label_1eb298:
    // 0x1eb298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb29c:
    // 0x1eb29c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eb29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb2a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eb2a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb2a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eb2a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eb2a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1eb2a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb2ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1eb2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eb2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2B0u;
        // 0x1eb2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB2B8u;
}
