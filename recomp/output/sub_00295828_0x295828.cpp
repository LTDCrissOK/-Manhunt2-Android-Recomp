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

// Function: sub_00295828
// Address: 0x295828 - 0x295918
void sub_00295828_0x295828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295828_0x295828");
#endif

    switch (ctx->pc) {
        case 0x29585cu: goto label_29585c;
        case 0x295864u: goto label_295864;
        case 0x2958b4u: goto label_2958b4;
        default: break;
    }

    ctx->pc = 0x295828u;

    // 0x295828: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x295828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29582c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x295830: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x295830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x295834: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x295834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295838: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x295838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x29583c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29583cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295840: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x295840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x295844: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x295844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295848: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x295848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29584c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x295850: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x295850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x295854: 0xc0a5646  jal         func_295918
    ctx->pc = 0x295854u;
    SET_GPR_U32(ctx, 31, 0x29585Cu);
    ctx->pc = 0x295858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295854u;
    // 0x295858: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295918u, 0x295854u, 0x29585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29585Cu;
label_29585c:
    // 0x29585c: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x29585Cu;
    SET_GPR_U32(ctx, 31, 0x295864u);
    ctx->pc = 0x295860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29585Cu;
    // 0x295860: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x29585Cu, 0x295864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295864u;
label_295864:
    // 0x295864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x295864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295868: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x295868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x29586c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29586Cu;
    {
        const bool branch_taken_0x29586c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29586Cu;
        // 0x295870: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29586c) {
            ctx->pc = 0x2958A8u;
            goto label_2958a8;
        }
    }
    ctx->pc = 0x295874u;
    // 0x295874: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x295874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x295878: 0x2442ba80  addiu       $v0, $v0, -0x4580
    ctx->pc = 0x295878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949504));
    // 0x29587c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295880: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x295880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295884: 0x800008  jr          $a0
    ctx->pc = 0x295884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29588Cu: goto label_29588c;
            case 0x295894u: goto label_295894;
            case 0x29589Cu: goto label_29589c;
            case 0x2958A4u: goto label_2958a4;
            case 0x2958A8u: goto label_2958a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295884u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29588Cu;
label_29588c:
    // 0x29588c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29588Cu;
    {
        const bool branch_taken_0x29588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29588Cu;
        // 0x295890: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29588c) {
            ctx->pc = 0x2958A8u;
            goto label_2958a8;
        }
    }
    ctx->pc = 0x295894u;
label_295894:
    // 0x295894: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295894u;
    {
        const bool branch_taken_0x295894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295894u;
        // 0x295898: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295894) {
            ctx->pc = 0x2958A8u;
            goto label_2958a8;
        }
    }
    ctx->pc = 0x29589Cu;
label_29589c:
    // 0x29589c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29589Cu;
    {
        const bool branch_taken_0x29589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29589Cu;
        // 0x2958a0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29589c) {
            ctx->pc = 0x2958A8u;
            goto label_2958a8;
        }
    }
    ctx->pc = 0x2958A4u;
label_2958a4:
    // 0x2958a4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x2958a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2958a8:
    // 0x2958a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2958a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2958ac: 0xc0aa3f2  jal         func_2A8FC8
    ctx->pc = 0x2958ACu;
    SET_GPR_U32(ctx, 31, 0x2958B4u);
    ctx->pc = 0x2958B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2958ACu;
    // 0x2958b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8FC8u, 0x2958ACu, 0x2958B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958B4u;
label_2958b4:
    // 0x2958b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2958b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2958b8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2958b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2958bc: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2958bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2958c0: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2958c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2958c4: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x2958c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x2958c8: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x2958c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2958cc: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x2958ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x2958d0: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x2958d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2958d4: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x2958d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2958d8: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x2958d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2958dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2958dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2958e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2958e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2958e4: 0x93a50002  lbu         $a1, 0x2($sp)
    ctx->pc = 0x2958e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2958e8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2958e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x2958ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2958ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2958f0: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x2958f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2958f4: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x2958f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x2958f8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2958f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2958fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2958fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x295900: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x295900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295904: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x295904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x295908: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x295908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29590c: 0x3e00008  jr          $ra
    ctx->pc = 0x29590Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29590Cu;
        // 0x295910: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29590Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295914u;
    // 0x295914: 0x0  nop
    ctx->pc = 0x295914u;
    // NOP
    ctx->pc = 0x295918u;
}
