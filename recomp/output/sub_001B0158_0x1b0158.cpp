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

// Function: sub_001B0158
// Address: 0x1b0158 - 0x1b0454
void sub_001B0158_0x1b0158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0158_0x1b0158");
#endif

    switch (ctx->pc) {
        case 0x1b0194u: goto label_1b0194;
        case 0x1b01acu: goto label_1b01ac;
        case 0x1b01c4u: goto label_1b01c4;
        case 0x1b01dcu: goto label_1b01dc;
        case 0x1b01f4u: goto label_1b01f4;
        case 0x1b020cu: goto label_1b020c;
        case 0x1b0224u: goto label_1b0224;
        case 0x1b023cu: goto label_1b023c;
        case 0x1b0254u: goto label_1b0254;
        case 0x1b026cu: goto label_1b026c;
        case 0x1b0284u: goto label_1b0284;
        case 0x1b029cu: goto label_1b029c;
        case 0x1b02b4u: goto label_1b02b4;
        case 0x1b02ccu: goto label_1b02cc;
        case 0x1b02e4u: goto label_1b02e4;
        case 0x1b02fcu: goto label_1b02fc;
        case 0x1b0314u: goto label_1b0314;
        case 0x1b032cu: goto label_1b032c;
        case 0x1b0344u: goto label_1b0344;
        case 0x1b035cu: goto label_1b035c;
        case 0x1b0374u: goto label_1b0374;
        case 0x1b038cu: goto label_1b038c;
        case 0x1b03a4u: goto label_1b03a4;
        case 0x1b03bcu: goto label_1b03bc;
        case 0x1b03d4u: goto label_1b03d4;
        case 0x1b03ecu: goto label_1b03ec;
        case 0x1b0404u: goto label_1b0404;
        case 0x1b041cu: goto label_1b041c;
        case 0x1b0434u: goto label_1b0434;
        case 0x1b044cu: goto label_1b044c;
        default: break;
    }

    ctx->pc = 0x1b0158u;

    // 0x1b0158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b015c: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x1b015cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b0160: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1B0160u;
    {
        const bool branch_taken_0x1b0160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0160u;
        // 0x1b0164: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0160) {
            ctx->pc = 0x1B0464u;
            return;
        }
    }
    ctx->pc = 0x1B0168u;
    // 0x1b0168: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b016c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b016cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b0170: 0x2442b100  addiu       $v0, $v0, -0x4F00
    ctx->pc = 0x1b0170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947072));
    // 0x1b0174: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0178: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b0178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b017c: 0x800008  jr          $a0
    ctx->pc = 0x1B017Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0184u: goto label_1b0184;
            case 0x1B019Cu: goto label_1b019c;
            case 0x1B01B4u: goto label_1b01b4;
            case 0x1B01CCu: goto label_1b01cc;
            case 0x1B01E4u: goto label_1b01e4;
            case 0x1B01FCu: goto label_1b01fc;
            case 0x1B0214u: goto label_1b0214;
            case 0x1B022Cu: goto label_1b022c;
            case 0x1B0244u: goto label_1b0244;
            case 0x1B025Cu: goto label_1b025c;
            case 0x1B0274u: goto label_1b0274;
            case 0x1B028Cu: goto label_1b028c;
            case 0x1B02A4u: goto label_1b02a4;
            case 0x1B02BCu: goto label_1b02bc;
            case 0x1B02D4u: goto label_1b02d4;
            case 0x1B02ECu: goto label_1b02ec;
            case 0x1B0304u: goto label_1b0304;
            case 0x1B031Cu: goto label_1b031c;
            case 0x1B0334u: goto label_1b0334;
            case 0x1B034Cu: goto label_1b034c;
            case 0x1B0364u: goto label_1b0364;
            case 0x1B037Cu: goto label_1b037c;
            case 0x1B0394u: goto label_1b0394;
            case 0x1B03ACu: goto label_1b03ac;
            case 0x1B03C4u: goto label_1b03c4;
            case 0x1B03DCu: goto label_1b03dc;
            case 0x1B03F4u: goto label_1b03f4;
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B0424u: goto label_1b0424;
            case 0x1B043Cu: goto label_1b043c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B017Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B0184u;
label_1b0184:
    // 0x1b0184: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0188: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b018c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B018Cu;
    SET_GPR_U32(ctx, 31, 0x1B0194u);
    ctx->pc = 0x1B0190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B018Cu;
    // 0x1b0190: 0x24a5af18  addiu       $a1, $a1, -0x50E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B018Cu, 0x1B0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0194u;
label_1b0194:
    // 0x1b0194: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1B0194u;
    {
        const bool branch_taken_0x1b0194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0194u;
        // 0x1b0198: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0194) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B019Cu;
label_1b019c:
    // 0x1b019c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b019cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b01a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b01a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01a4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B01A4u;
    SET_GPR_U32(ctx, 31, 0x1B01ACu);
    ctx->pc = 0x1B01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01A4u;
    // 0x1b01a8: 0x24a5af28  addiu       $a1, $a1, -0x50D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B01A4u, 0x1B01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01ACu;
label_1b01ac:
    // 0x1b01ac: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x1B01ACu;
    {
        const bool branch_taken_0x1b01ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01ACu;
        // 0x1b01b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01ac) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B01B4u;
label_1b01b4:
    // 0x1b01b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b01b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b01b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b01b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01bc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B01BCu;
    SET_GPR_U32(ctx, 31, 0x1B01C4u);
    ctx->pc = 0x1B01C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01BCu;
    // 0x1b01c0: 0x24a5af30  addiu       $a1, $a1, -0x50D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B01BCu, 0x1B01C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01C4u;
label_1b01c4:
    // 0x1b01c4: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1B01C4u;
    {
        const bool branch_taken_0x1b01c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01C4u;
        // 0x1b01c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01c4) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B01CCu;
label_1b01cc:
    // 0x1b01cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b01ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b01d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b01d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B01D4u;
    SET_GPR_U32(ctx, 31, 0x1B01DCu);
    ctx->pc = 0x1B01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01D4u;
    // 0x1b01d8: 0x24a5af38  addiu       $a1, $a1, -0x50C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B01D4u, 0x1B01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01DCu;
label_1b01dc:
    // 0x1b01dc: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1B01DCu;
    {
        const bool branch_taken_0x1b01dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01DCu;
        // 0x1b01e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01dc) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B01E4u;
label_1b01e4:
    // 0x1b01e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b01e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b01e8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b01e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01ec: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B01ECu;
    SET_GPR_U32(ctx, 31, 0x1B01F4u);
    ctx->pc = 0x1B01F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01ECu;
    // 0x1b01f0: 0x24a5af40  addiu       $a1, $a1, -0x50C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B01ECu, 0x1B01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01F4u;
label_1b01f4:
    // 0x1b01f4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1B01F4u;
    {
        const bool branch_taken_0x1b01f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01F4u;
        // 0x1b01f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01f4) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B01FCu;
label_1b01fc:
    // 0x1b01fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b01fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0200: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0204: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0204u;
    SET_GPR_U32(ctx, 31, 0x1B020Cu);
    ctx->pc = 0x1B0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0204u;
    // 0x1b0208: 0x24a5af50  addiu       $a1, $a1, -0x50B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0204u, 0x1B020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B020Cu;
label_1b020c:
    // 0x1b020c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1B020Cu;
    {
        const bool branch_taken_0x1b020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B020Cu;
        // 0x1b0210: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b020c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0214u;
label_1b0214:
    // 0x1b0214: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0218: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b021c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B021Cu;
    SET_GPR_U32(ctx, 31, 0x1B0224u);
    ctx->pc = 0x1B0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B021Cu;
    // 0x1b0220: 0x24a5af60  addiu       $a1, $a1, -0x50A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B021Cu, 0x1B0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0224u;
label_1b0224:
    // 0x1b0224: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1B0224u;
    {
        const bool branch_taken_0x1b0224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0224u;
        // 0x1b0228: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0224) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B022Cu;
label_1b022c:
    // 0x1b022c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b022cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0230: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0234: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0234u;
    SET_GPR_U32(ctx, 31, 0x1B023Cu);
    ctx->pc = 0x1B0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0234u;
    // 0x1b0238: 0x24a5af78  addiu       $a1, $a1, -0x5088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0234u, 0x1B023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B023Cu;
label_1b023c:
    // 0x1b023c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1B023Cu;
    {
        const bool branch_taken_0x1b023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B023Cu;
        // 0x1b0240: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b023c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0244u;
label_1b0244:
    // 0x1b0244: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0248: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b024c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B024Cu;
    SET_GPR_U32(ctx, 31, 0x1B0254u);
    ctx->pc = 0x1B0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B024Cu;
    // 0x1b0250: 0x24a5af90  addiu       $a1, $a1, -0x5070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B024Cu, 0x1B0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0254u;
label_1b0254:
    // 0x1b0254: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1B0254u;
    {
        const bool branch_taken_0x1b0254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0254u;
        // 0x1b0258: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0254) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B025Cu;
label_1b025c:
    // 0x1b025c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b025cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0260: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0264: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0264u;
    SET_GPR_U32(ctx, 31, 0x1B026Cu);
    ctx->pc = 0x1B0268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0264u;
    // 0x1b0268: 0x24a5afa8  addiu       $a1, $a1, -0x5058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0264u, 0x1B026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B026Cu;
label_1b026c:
    // 0x1b026c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1B026Cu;
    {
        const bool branch_taken_0x1b026c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B026Cu;
        // 0x1b0270: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b026c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0274u;
label_1b0274:
    // 0x1b0274: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0278: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b027c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B027Cu;
    SET_GPR_U32(ctx, 31, 0x1B0284u);
    ctx->pc = 0x1B0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B027Cu;
    // 0x1b0280: 0x24a5afc0  addiu       $a1, $a1, -0x5040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B027Cu, 0x1B0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0284u;
label_1b0284:
    // 0x1b0284: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1B0284u;
    {
        const bool branch_taken_0x1b0284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0284u;
        // 0x1b0288: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0284) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B028Cu;
label_1b028c:
    // 0x1b028c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b028cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0290: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0294: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0294u;
    SET_GPR_U32(ctx, 31, 0x1B029Cu);
    ctx->pc = 0x1B0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0294u;
    // 0x1b0298: 0x24a5afc8  addiu       $a1, $a1, -0x5038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0294u, 0x1B029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B029Cu;
label_1b029c:
    // 0x1b029c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1B029Cu;
    {
        const bool branch_taken_0x1b029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B029Cu;
        // 0x1b02a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b029c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B02A4u;
label_1b02a4:
    // 0x1b02a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b02a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b02a8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b02a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02ac: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B02ACu;
    SET_GPR_U32(ctx, 31, 0x1B02B4u);
    ctx->pc = 0x1B02B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02ACu;
    // 0x1b02b0: 0x24a5afd8  addiu       $a1, $a1, -0x5028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B02ACu, 0x1B02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02B4u;
label_1b02b4:
    // 0x1b02b4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1B02B4u;
    {
        const bool branch_taken_0x1b02b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02B4u;
        // 0x1b02b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02b4) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B02BCu;
label_1b02bc:
    // 0x1b02bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b02bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b02c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b02c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02c4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B02C4u;
    SET_GPR_U32(ctx, 31, 0x1B02CCu);
    ctx->pc = 0x1B02C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02C4u;
    // 0x1b02c8: 0x24a5afe8  addiu       $a1, $a1, -0x5018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B02C4u, 0x1B02CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02CCu;
label_1b02cc:
    // 0x1b02cc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1B02CCu;
    {
        const bool branch_taken_0x1b02cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02CCu;
        // 0x1b02d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02cc) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B02D4u;
label_1b02d4:
    // 0x1b02d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b02d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b02d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b02d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02dc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B02DCu;
    SET_GPR_U32(ctx, 31, 0x1B02E4u);
    ctx->pc = 0x1B02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02DCu;
    // 0x1b02e0: 0x24a5aff8  addiu       $a1, $a1, -0x5008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B02DCu, 0x1B02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02E4u;
label_1b02e4:
    // 0x1b02e4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B02E4u;
    {
        const bool branch_taken_0x1b02e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02E4u;
        // 0x1b02e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02e4) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B02ECu;
label_1b02ec:
    // 0x1b02ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b02ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b02f0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b02f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02f4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B02F4u;
    SET_GPR_U32(ctx, 31, 0x1B02FCu);
    ctx->pc = 0x1B02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02F4u;
    // 0x1b02f8: 0x24a5b000  addiu       $a1, $a1, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B02F4u, 0x1B02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02FCu;
label_1b02fc:
    // 0x1b02fc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1B02FCu;
    {
        const bool branch_taken_0x1b02fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02FCu;
        // 0x1b0300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02fc) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0304u;
label_1b0304:
    // 0x1b0304: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0308: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b030c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B030Cu;
    SET_GPR_U32(ctx, 31, 0x1B0314u);
    ctx->pc = 0x1B0310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B030Cu;
    // 0x1b0310: 0x24a5b010  addiu       $a1, $a1, -0x4FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B030Cu, 0x1B0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0314u;
label_1b0314:
    // 0x1b0314: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1B0314u;
    {
        const bool branch_taken_0x1b0314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0314u;
        // 0x1b0318: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0314) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B031Cu;
label_1b031c:
    // 0x1b031c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b031cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0320: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0324: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0324u;
    SET_GPR_U32(ctx, 31, 0x1B032Cu);
    ctx->pc = 0x1B0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0324u;
    // 0x1b0328: 0x24a5b020  addiu       $a1, $a1, -0x4FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0324u, 0x1B032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B032Cu;
label_1b032c:
    // 0x1b032c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1B032Cu;
    {
        const bool branch_taken_0x1b032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B032Cu;
        // 0x1b0330: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b032c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0334u;
label_1b0334:
    // 0x1b0334: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0338: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b033c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B033Cu;
    SET_GPR_U32(ctx, 31, 0x1B0344u);
    ctx->pc = 0x1B0340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B033Cu;
    // 0x1b0340: 0x24a5b030  addiu       $a1, $a1, -0x4FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B033Cu, 0x1B0344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0344u;
label_1b0344:
    // 0x1b0344: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1B0344u;
    {
        const bool branch_taken_0x1b0344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0344u;
        // 0x1b0348: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0344) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B034Cu;
label_1b034c:
    // 0x1b034c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b034cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0350: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0354: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0354u;
    SET_GPR_U32(ctx, 31, 0x1B035Cu);
    ctx->pc = 0x1B0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0354u;
    // 0x1b0358: 0x24a5b040  addiu       $a1, $a1, -0x4FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0354u, 0x1B035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B035Cu;
label_1b035c:
    // 0x1b035c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1B035Cu;
    {
        const bool branch_taken_0x1b035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B035Cu;
        // 0x1b0360: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b035c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0364u;
label_1b0364:
    // 0x1b0364: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0368: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b036c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B036Cu;
    SET_GPR_U32(ctx, 31, 0x1B0374u);
    ctx->pc = 0x1B0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B036Cu;
    // 0x1b0370: 0x24a5b050  addiu       $a1, $a1, -0x4FB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B036Cu, 0x1B0374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0374u;
label_1b0374:
    // 0x1b0374: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B0374u;
    {
        const bool branch_taken_0x1b0374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0374u;
        // 0x1b0378: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0374) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B037Cu;
label_1b037c:
    // 0x1b037c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b037cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0380: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0384: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0384u;
    SET_GPR_U32(ctx, 31, 0x1B038Cu);
    ctx->pc = 0x1B0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0384u;
    // 0x1b0388: 0x24a5b060  addiu       $a1, $a1, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0384u, 0x1B038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B038Cu;
label_1b038c:
    // 0x1b038c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1B038Cu;
    {
        const bool branch_taken_0x1b038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B038Cu;
        // 0x1b0390: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b038c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0394u;
label_1b0394:
    // 0x1b0394: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0398: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b039c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B039Cu;
    SET_GPR_U32(ctx, 31, 0x1B03A4u);
    ctx->pc = 0x1B03A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B039Cu;
    // 0x1b03a0: 0x24a5b070  addiu       $a1, $a1, -0x4F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B039Cu, 0x1B03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03A4u;
label_1b03a4:
    // 0x1b03a4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B03A4u;
    {
        const bool branch_taken_0x1b03a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03A4u;
        // 0x1b03a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03a4) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B03ACu;
label_1b03ac:
    // 0x1b03ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b03acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b03b0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b03b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03b4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B03B4u;
    SET_GPR_U32(ctx, 31, 0x1B03BCu);
    ctx->pc = 0x1B03B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03B4u;
    // 0x1b03b8: 0x24a5b080  addiu       $a1, $a1, -0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B03B4u, 0x1B03BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03BCu;
label_1b03bc:
    // 0x1b03bc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1B03BCu;
    {
        const bool branch_taken_0x1b03bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03BCu;
        // 0x1b03c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03bc) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B03C4u;
label_1b03c4:
    // 0x1b03c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b03c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b03c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03cc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B03CCu;
    SET_GPR_U32(ctx, 31, 0x1B03D4u);
    ctx->pc = 0x1B03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03CCu;
    // 0x1b03d0: 0x24a5b098  addiu       $a1, $a1, -0x4F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B03CCu, 0x1B03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03D4u;
label_1b03d4:
    // 0x1b03d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B03D4u;
    {
        const bool branch_taken_0x1b03d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03D4u;
        // 0x1b03d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03d4) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B03DCu;
label_1b03dc:
    // 0x1b03dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b03e0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b03e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03e4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B03E4u;
    SET_GPR_U32(ctx, 31, 0x1B03ECu);
    ctx->pc = 0x1B03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03E4u;
    // 0x1b03e8: 0x24a5b0a8  addiu       $a1, $a1, -0x4F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B03E4u, 0x1B03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03ECu;
label_1b03ec:
    // 0x1b03ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B03ECu;
    {
        const bool branch_taken_0x1b03ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03ECu;
        // 0x1b03f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03ec) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B03F4u;
label_1b03f4:
    // 0x1b03f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b03f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b03f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b03f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03fc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B03FCu;
    SET_GPR_U32(ctx, 31, 0x1B0404u);
    ctx->pc = 0x1B0400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03FCu;
    // 0x1b0400: 0x24a5b0b0  addiu       $a1, $a1, -0x4F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B03FCu, 0x1B0404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0404u;
label_1b0404:
    // 0x1b0404: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B0404u;
    {
        const bool branch_taken_0x1b0404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0404u;
        // 0x1b0408: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0404) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B040Cu;
label_1b040c:
    // 0x1b040c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b040cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0410: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0414: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0414u;
    SET_GPR_U32(ctx, 31, 0x1B041Cu);
    ctx->pc = 0x1B0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0414u;
    // 0x1b0418: 0x24a5b0c0  addiu       $a1, $a1, -0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0414u, 0x1B041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B041Cu;
label_1b041c:
    // 0x1b041c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B041Cu;
    {
        const bool branch_taken_0x1b041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B041Cu;
        // 0x1b0420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b041c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0424u;
label_1b0424:
    // 0x1b0424: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0428: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b042c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B042Cu;
    SET_GPR_U32(ctx, 31, 0x1B0434u);
    ctx->pc = 0x1B0430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B042Cu;
    // 0x1b0430: 0x24a5b0d0  addiu       $a1, $a1, -0x4F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B042Cu, 0x1B0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0434u;
label_1b0434:
    // 0x1b0434: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B0434u;
    {
        const bool branch_taken_0x1b0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0434u;
        // 0x1b0438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0434) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B043Cu;
label_1b043c:
    // 0x1b043c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b043cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b0440: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b0440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0444: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1B0444u;
    SET_GPR_U32(ctx, 31, 0x1B044Cu);
    ctx->pc = 0x1B0448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0444u;
    // 0x1b0448: 0x24a5b0e0  addiu       $a1, $a1, -0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1B0444u, 0x1B044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B044Cu;
label_1b044c:
    // 0x1b044c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B044Cu;
    {
        const bool branch_taken_0x1b044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B044Cu;
        // 0x1b0450: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b044c) {
            ctx->pc = 0x1B0468u;
            return;
        }
    }
    ctx->pc = 0x1B0454u;
}
