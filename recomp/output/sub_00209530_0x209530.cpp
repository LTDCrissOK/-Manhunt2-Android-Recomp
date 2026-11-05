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

// Function: sub_00209530
// Address: 0x209530 - 0x2096c8
void sub_00209530_0x209530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209530_0x209530");
#endif

    switch (ctx->pc) {
        case 0x209580u: goto label_209580;
        case 0x209588u: goto label_209588;
        case 0x2095a8u: goto label_2095a8;
        case 0x2095b0u: goto label_2095b0;
        case 0x2095d0u: goto label_2095d0;
        case 0x2095e0u: goto label_2095e0;
        case 0x209608u: goto label_209608;
        case 0x209614u: goto label_209614;
        case 0x209628u: goto label_209628;
        case 0x209630u: goto label_209630;
        case 0x209638u: goto label_209638;
        case 0x209644u: goto label_209644;
        case 0x209654u: goto label_209654;
        case 0x209658u: goto label_209658;
        case 0x2096a0u: goto label_2096a0;
        default: break;
    }

    ctx->pc = 0x209530u;

    // 0x209530: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x209530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x209534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209538: 0xffb401b0  sd          $s4, 0x1B0($sp)
    ctx->pc = 0x209538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 20));
    // 0x20953c: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x20953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x209540: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x209540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209544: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x209544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x209548: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x209548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20954c: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x20954cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
    // 0x209550: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x209550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x209554: 0xffb301a8  sd          $s3, 0x1A8($sp)
    ctx->pc = 0x209554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 19));
    // 0x209558: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x209558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20955c: 0xffb501b8  sd          $s5, 0x1B8($sp)
    ctx->pc = 0x20955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 21));
    // 0x209560: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x209560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209564: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x209564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x209568: 0x24a50be8  addiu       $a1, $a1, 0xBE8
    ctx->pc = 0x209568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3048));
    // 0x20956c: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x20956cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x209570: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x209570u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x209574: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x209574u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x209578: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x209578u;
    SET_GPR_U32(ctx, 31, 0x209580u);
    ctx->pc = 0x20957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209578u;
    // 0x20957c: 0xa1000001  sb          $zero, 0x1($t0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x209578u, 0x209580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209580u;
label_209580:
    // 0x209580: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x209580u;
    SET_GPR_U32(ctx, 31, 0x209588u);
    ctx->pc = 0x209584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209580u;
    // 0x209584: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x209580u, 0x209588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209588u;
label_209588:
    // 0x209588: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x209588u;
    {
        const bool branch_taken_0x209588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209588u;
        // 0x20958c: 0xa3a00001  sb          $zero, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209588) {
            ctx->pc = 0x2095B4u;
            goto label_2095b4;
        }
    }
    ctx->pc = 0x209590u;
    // 0x209590: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x209590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209594: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x209594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x209598: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x209598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x20959c: 0x24a50bf8  addiu       $a1, $a1, 0xBF8
    ctx->pc = 0x20959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3064));
    // 0x2095a0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2095A0u;
    SET_GPR_U32(ctx, 31, 0x2095A8u);
    ctx->pc = 0x2095A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095A0u;
    // 0x2095a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2095A0u, 0x2095A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095A8u;
label_2095a8:
    // 0x2095a8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2095A8u;
    SET_GPR_U32(ctx, 31, 0x2095B0u);
    ctx->pc = 0x2095ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095A8u;
    // 0x2095ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2095A8u, 0x2095B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095B0u;
label_2095b0:
    // 0x2095b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2095b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2095b4:
    // 0x2095b4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x2095b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2095b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2095b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2095bc: 0x3b18021  addu        $s0, $sp, $s1
    ctx->pc = 0x2095bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x2095c0: 0x24a50c00  addiu       $a1, $a1, 0xC00
    ctx->pc = 0x2095c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
    // 0x2095c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2095c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095c8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2095C8u;
    SET_GPR_U32(ctx, 31, 0x2095D0u);
    ctx->pc = 0x2095CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095C8u;
    // 0x2095cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2095C8u, 0x2095D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095D0u;
label_2095d0:
    // 0x2095d0: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x2095d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
    // 0x2095d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2095d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095d8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2095D8u;
    SET_GPR_U32(ctx, 31, 0x2095E0u);
    ctx->pc = 0x2095DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095D8u;
    // 0x2095dc: 0x2675c0d0  addiu       $s5, $s3, -0x3F30 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2095D8u, 0x2095E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095E0u;
label_2095e0:
    // 0x2095e0: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x2095e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2095e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2095e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2095ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2095f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2095f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095f4: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x2095f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2095f8: 0x24a50c08  addiu       $a1, $a1, 0xC08
    ctx->pc = 0x2095f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3080));
    // 0x2095fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2095fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209600: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x209600u;
    SET_GPR_U32(ctx, 31, 0x209608u);
    ctx->pc = 0x209604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209600u;
    // 0x209604: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x209600u, 0x209608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209608u;
label_209608:
    // 0x209608: 0x24112710  addiu       $s1, $zero, 0x2710
    ctx->pc = 0x209608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x20960c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x20960Cu;
    SET_GPR_U32(ctx, 31, 0x209614u);
    ctx->pc = 0x209610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20960Cu;
    // 0x209610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x20960Cu, 0x209614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209614u;
label_209614:
    // 0x209614: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x209614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x209618: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x209618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20961c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209620: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x209620u;
    SET_GPR_U32(ctx, 31, 0x209628u);
    ctx->pc = 0x209624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209620u;
    // 0x209624: 0x24a50c10  addiu       $a1, $a1, 0xC10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x209620u, 0x209628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209628u;
label_209628:
    // 0x209628: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x209628u;
    SET_GPR_U32(ctx, 31, 0x209630u);
    ctx->pc = 0x20962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209628u;
    // 0x20962c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x209628u, 0x209630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209630u;
label_209630:
    // 0x209630: 0x2664c0d0  addiu       $a0, $s3, -0x3F30
    ctx->pc = 0x209630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951120));
    // 0x209634: 0x0  nop
    ctx->pc = 0x209634u;
    // NOP
label_209638:
    // 0x209638: 0x3405bcf7  ori         $a1, $zero, 0xBCF7
    ctx->pc = 0x209638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48375);
    // 0x20963c: 0xc0f3404  jal         func_3CD010
    ctx->pc = 0x20963Cu;
    SET_GPR_U32(ctx, 31, 0x209644u);
    ctx->pc = 0x209640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20963Cu;
    // 0x209640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD010u, 0x20963Cu, 0x209644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209644u;
label_209644:
    // 0x209644: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209644u;
    {
        const bool branch_taken_0x209644 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x209644) {
            ctx->pc = 0x209654u;
            goto label_209654;
        }
    }
    ctx->pc = 0x20964Cu;
    // 0x20964c: 0xc08251c  jal         func_209470
    ctx->pc = 0x20964Cu;
    SET_GPR_U32(ctx, 31, 0x209654u);
    ctx->pc = 0x209650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20964Cu;
    // 0x209650: 0x26840c20  addiu       $a0, $s4, 0xC20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209470u, 0x20964Cu, 0x209654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209654u;
label_209654:
    // 0x209654: 0xafb10180  sw          $s1, 0x180($sp)
    ctx->pc = 0x209654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 17));
label_209658:
    // 0x209658: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x209658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x20965c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20965cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x209660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x209664: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x209664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x209668: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x209668u;
    {
        const bool branch_taken_0x209668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209668) {
            ctx->pc = 0x209658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209658;
        }
    }
    ctx->pc = 0x209670u;
    // 0x209670: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x209670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x209674: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209674u;
    {
        const bool branch_taken_0x209674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209674) {
            ctx->pc = 0x209688u;
            goto label_209688;
        }
    }
    ctx->pc = 0x20967Cu;
    // 0x20967c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x20967cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x209680: 0x5640ffed  bnel        $s2, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x209680u;
    {
        const bool branch_taken_0x209680 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x209680) {
            ctx->pc = 0x209684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209680u;
            // 0x209684: 0x2664c0d0  addiu       $a0, $s3, -0x3F30 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951120));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209638;
        }
    }
    ctx->pc = 0x209688u;
label_209688:
    // 0x209688: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x209688u;
    {
        const bool branch_taken_0x209688 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209688u;
        // 0x20968c: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209688) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209690u;
    // 0x209690: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x209690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x209694: 0x3405bcf7  ori         $a1, $zero, 0xBCF7
    ctx->pc = 0x209694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48375);
    // 0x209698: 0xc082534  jal         func_2094D0
    ctx->pc = 0x209698u;
    SET_GPR_U32(ctx, 31, 0x2096A0u);
    ctx->pc = 0x20969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209698u;
    // 0x20969c: 0x24840c40  addiu       $a0, $a0, 0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094D0u, 0x209698u, 0x2096A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096A0u;
label_2096a0:
    // 0x2096a0: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x2096a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_2096a4:
    // 0x2096a4: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x2096a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2096a8: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x2096a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2096ac: 0xdfb301a8  ld          $s3, 0x1A8($sp)
    ctx->pc = 0x2096acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2096b0: 0xdfb401b0  ld          $s4, 0x1B0($sp)
    ctx->pc = 0x2096b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2096b4: 0xdfb501b8  ld          $s5, 0x1B8($sp)
    ctx->pc = 0x2096b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2096b8: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x2096b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2096bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2096BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096BCu;
        // 0x2096c0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2096BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2096C4u;
    // 0x2096c4: 0x0  nop
    ctx->pc = 0x2096c4u;
    // NOP
    ctx->pc = 0x2096c8u;
}
