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

// Function: sub_00158140
// Address: 0x158140 - 0x158214
void sub_00158140_0x158140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158140_0x158140");
#endif

    switch (ctx->pc) {
        case 0x15818cu: goto label_15818c;
        case 0x15819cu: goto label_15819c;
        case 0x1581acu: goto label_1581ac;
        case 0x1581bcu: goto label_1581bc;
        case 0x1581ccu: goto label_1581cc;
        case 0x1581dcu: goto label_1581dc;
        case 0x1581ecu: goto label_1581ec;
        case 0x1581fcu: goto label_1581fc;
        case 0x15820cu: goto label_15820c;
        default: break;
    }

    ctx->pc = 0x158140u;

    // 0x158140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158144: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x158144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15814c: 0x90a202a8  lbu         $v0, 0x2A8($a1)
    ctx->pc = 0x15814cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 680)));
    // 0x158150: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x158150u;
    {
        const bool branch_taken_0x158150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158150u;
        // 0x158154: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158150) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x158158u;
    // 0x158158: 0x8ca202e0  lw          $v0, 0x2E0($a1)
    ctx->pc = 0x158158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 736)));
    // 0x15815c: 0x2444fff7  addiu       $a0, $v0, -0x9
    ctx->pc = 0x15815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x158160: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x158160u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x158164: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x158164u;
    {
        const bool branch_taken_0x158164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158164u;
        // 0x158168: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158164) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x15816Cu;
    // 0x15816c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15816cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x158170: 0x2442ed70  addiu       $v0, $v0, -0x1290
    ctx->pc = 0x158170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962544));
    // 0x158174: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158178: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x158178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15817c: 0x800008  jr          $a0
    ctx->pc = 0x15817Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158184u: goto label_158184;
            case 0x158194u: goto label_158194;
            case 0x1581A4u: goto label_1581a4;
            case 0x1581B4u: goto label_1581b4;
            case 0x1581C4u: goto label_1581c4;
            case 0x1581D4u: goto label_1581d4;
            case 0x1581E4u: goto label_1581e4;
            case 0x1581F4u: goto label_1581f4;
            case 0x158204u: goto label_158204;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15817Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x158184u;
label_158184:
    // 0x158184: 0xc05614c  jal         func_158530
    ctx->pc = 0x158184u;
    SET_GPR_U32(ctx, 31, 0x15818Cu);
    ctx->pc = 0x158188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158184u;
    // 0x158188: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x158184u, 0x15818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15818Cu;
label_15818c:
    // 0x15818c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15818Cu;
    {
        const bool branch_taken_0x15818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15818Cu;
        // 0x158190: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15818c) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x158194u;
label_158194:
    // 0x158194: 0xc056190  jal         func_158640
    ctx->pc = 0x158194u;
    SET_GPR_U32(ctx, 31, 0x15819Cu);
    ctx->pc = 0x158198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158194u;
    // 0x158198: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158640u, 0x158194u, 0x15819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15819Cu;
label_15819c:
    // 0x15819c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15819Cu;
    {
        const bool branch_taken_0x15819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15819Cu;
        // 0x1581a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15819c) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x1581A4u;
label_1581a4:
    // 0x1581a4: 0xc0561b2  jal         func_1586C8
    ctx->pc = 0x1581A4u;
    SET_GPR_U32(ctx, 31, 0x1581ACu);
    ctx->pc = 0x1581A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581A4u;
    // 0x1581a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1586C8u, 0x1581A4u, 0x1581ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581ACu;
label_1581ac:
    // 0x1581ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1581ACu;
    {
        const bool branch_taken_0x1581ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581ACu;
        // 0x1581b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581ac) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x1581B4u;
label_1581b4:
    // 0x1581b4: 0xc056202  jal         func_158808
    ctx->pc = 0x1581B4u;
    SET_GPR_U32(ctx, 31, 0x1581BCu);
    ctx->pc = 0x1581B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581B4u;
    // 0x1581b8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158808u, 0x1581B4u, 0x1581BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581BCu;
label_1581bc:
    // 0x1581bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1581BCu;
    {
        const bool branch_taken_0x1581bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581BCu;
        // 0x1581c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581bc) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x1581C4u;
label_1581c4:
    // 0x1581c4: 0xc0562f0  jal         func_158BC0
    ctx->pc = 0x1581C4u;
    SET_GPR_U32(ctx, 31, 0x1581CCu);
    ctx->pc = 0x1581C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581C4u;
    // 0x1581c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158BC0u, 0x1581C4u, 0x1581CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581CCu;
label_1581cc:
    // 0x1581cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1581CCu;
    {
        const bool branch_taken_0x1581cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581CCu;
        // 0x1581d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581cc) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x1581D4u;
label_1581d4:
    // 0x1581d4: 0xc056258  jal         func_158960
    ctx->pc = 0x1581D4u;
    SET_GPR_U32(ctx, 31, 0x1581DCu);
    ctx->pc = 0x1581D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581D4u;
    // 0x1581d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158960u, 0x1581D4u, 0x1581DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581DCu;
label_1581dc:
    // 0x1581dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1581DCu;
    {
        const bool branch_taken_0x1581dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581DCu;
        // 0x1581e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581dc) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x1581E4u;
label_1581e4:
    // 0x1581e4: 0xc056280  jal         func_158A00
    ctx->pc = 0x1581E4u;
    SET_GPR_U32(ctx, 31, 0x1581ECu);
    ctx->pc = 0x1581E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581E4u;
    // 0x1581e8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A00u, 0x1581E4u, 0x1581ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581ECu;
label_1581ec:
    // 0x1581ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1581ECu;
    {
        const bool branch_taken_0x1581ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581ECu;
        // 0x1581f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581ec) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x1581F4u;
label_1581f4:
    // 0x1581f4: 0xc0562a8  jal         func_158AA0
    ctx->pc = 0x1581F4u;
    SET_GPR_U32(ctx, 31, 0x1581FCu);
    ctx->pc = 0x1581F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581F4u;
    // 0x1581f8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AA0u, 0x1581F4u, 0x1581FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581FCu;
label_1581fc:
    // 0x1581fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1581FCu;
    {
        const bool branch_taken_0x1581fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581FCu;
        // 0x158200: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581fc) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x158204u;
label_158204:
    // 0x158204: 0xc0562ce  jal         func_158B38
    ctx->pc = 0x158204u;
    SET_GPR_U32(ctx, 31, 0x15820Cu);
    ctx->pc = 0x158208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158204u;
    // 0x158208: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B38u, 0x158204u, 0x15820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15820Cu;
label_15820c:
    // 0x15820c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15820Cu;
    {
        const bool branch_taken_0x15820c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15820Cu;
        // 0x158210: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15820c) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x158214u;
}
