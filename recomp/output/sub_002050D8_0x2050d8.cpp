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

// Function: sub_002050D8
// Address: 0x2050d8 - 0x205198
void sub_002050D8_0x2050d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002050D8_0x2050d8");
#endif

    switch (ctx->pc) {
        case 0x205114u: goto label_205114;
        case 0x205120u: goto label_205120;
        case 0x205134u: goto label_205134;
        case 0x205140u: goto label_205140;
        case 0x205148u: goto label_205148;
        case 0x20515cu: goto label_20515c;
        default: break;
    }

    ctx->pc = 0x2050d8u;

    // 0x2050d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2050d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2050dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2050dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2050e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2050e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2050e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2050e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2050e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2050ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2050ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2050f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2050f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2050f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2050f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2050fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2050fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205100: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x205100u;
    {
        const bool branch_taken_0x205100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205100u;
        // 0x205104: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205100) {
            ctx->pc = 0x20517Cu;
            goto label_20517c;
        }
    }
    ctx->pc = 0x205108u;
    // 0x205108: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x205108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20510c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x20510Cu;
    SET_GPR_U32(ctx, 31, 0x205114u);
    ctx->pc = 0x205110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20510Cu;
    // 0x205110: 0x24a50b00  addiu       $a1, $a1, 0xB00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x20510Cu, 0x205114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205114u;
label_205114:
    // 0x205114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205118: 0xc081560  jal         func_205580
    ctx->pc = 0x205118u;
    SET_GPR_U32(ctx, 31, 0x205120u);
    ctx->pc = 0x20511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205118u;
    // 0x20511c: 0x2405fc40  addiu       $a1, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x205118u, 0x205120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205120u;
label_205120:
    // 0x205120: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x205120u;
    {
        const bool branch_taken_0x205120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x205124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205120u;
        // 0x205124: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205120) {
            ctx->pc = 0x205150u;
            goto label_205150;
        }
    }
    ctx->pc = 0x205128u;
    // 0x205128: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20512c: 0xc0e58e8  jal         func_3963A0
    ctx->pc = 0x20512Cu;
    SET_GPR_U32(ctx, 31, 0x205134u);
    ctx->pc = 0x205130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20512Cu;
    // 0x205130: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3963A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3963A0u, 0x20512Cu, 0x205134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205134u;
label_205134:
    // 0x205134: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205138: 0xc0e5966  jal         func_396598
    ctx->pc = 0x205138u;
    SET_GPR_U32(ctx, 31, 0x205140u);
    ctx->pc = 0x20513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205138u;
    // 0x20513c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396598u, 0x205138u, 0x205140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205140u;
label_205140:
    // 0x205140: 0xc0e592e  jal         func_3964B8
    ctx->pc = 0x205140u;
    SET_GPR_U32(ctx, 31, 0x205148u);
    ctx->pc = 0x205144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205140u;
    // 0x205144: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3964B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3964B8u, 0x205140u, 0x205148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205148u;
label_205148:
    // 0x205148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205148u;
    {
        const bool branch_taken_0x205148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205148u;
        // 0x20514c: 0x92020021  lbu         $v0, 0x21($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205148) {
            ctx->pc = 0x205160u;
            goto label_205160;
        }
    }
    ctx->pc = 0x205150u;
label_205150:
    // 0x205150: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x205150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205154: 0xc0e72ec  jal         func_39CBB0
    ctx->pc = 0x205154u;
    SET_GPR_U32(ctx, 31, 0x20515Cu);
    ctx->pc = 0x205158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205154u;
    // 0x205158: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CBB0u, 0x205154u, 0x20515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20515Cu;
label_20515c:
    // 0x20515c: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x20515cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
label_205160:
    // 0x205160: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205160u;
    {
        const bool branch_taken_0x205160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205160u;
        // 0x205164: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205160) {
            ctx->pc = 0x20517Cu;
            goto label_20517c;
        }
    }
    ctx->pc = 0x205168u;
    // 0x205168: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x205168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x20516c: 0x8c43c100  lw          $v1, -0x3F00($v0)
    ctx->pc = 0x20516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951168)));
    // 0x205170: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x205170u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x205174: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x205174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x205178: 0xa08393c0  sb          $v1, -0x6C40($a0)
    ctx->pc = 0x205178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294939584), (uint8_t)GPR_U32(ctx, 3));
label_20517c:
    // 0x20517c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20517cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205188: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x205188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20518c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205190: 0x3e00008  jr          $ra
    ctx->pc = 0x205190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205190u;
        // 0x205194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205198u;
}
