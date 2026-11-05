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

// Function: sub_00117120
// Address: 0x117120 - 0x117318
void sub_00117120_0x117120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117120_0x117120");
#endif

    switch (ctx->pc) {
        case 0x117140u: goto label_117140;
        case 0x117180u: goto label_117180;
        case 0x117188u: goto label_117188;
        case 0x1172d0u: goto label_1172d0;
        case 0x1172fcu: goto label_1172fc;
        default: break;
    }

    ctx->pc = 0x117120u;

    // 0x117120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11712c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x117130: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x117130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x117134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117138: 0xc0c1540  jal         func_305500
    ctx->pc = 0x117138u;
    SET_GPR_U32(ctx, 31, 0x117140u);
    ctx->pc = 0x11713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117138u;
    // 0x11713c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305500u, 0x117138u, 0x117140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117140u;
label_117140:
    // 0x117140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117144: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x117144u;
    {
        const bool branch_taken_0x117144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117144u;
        // 0x117148: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117144) {
            ctx->pc = 0x1172FCu;
            goto label_1172fc;
        }
    }
    ctx->pc = 0x11714Cu;
    // 0x11714c: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x11714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x117150: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x117150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x117154: 0x5460006a  bnel        $v1, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x117154u;
    {
        const bool branch_taken_0x117154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x117154) {
            ctx->pc = 0x117158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117154u;
            // 0x117158: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117300u;
            goto label_117300;
        }
    }
    ctx->pc = 0x11715Cu;
    // 0x11715c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x11715cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117160: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x117160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x117164: 0xac530028  sw          $s3, 0x28($v0)
    ctx->pc = 0x117164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 19));
    // 0x117168: 0x24729b10  addiu       $s2, $v1, -0x64F0
    ctx->pc = 0x117168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x11716c: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x11716cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x499B1Cu));
    // 0x117170: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x117170u;
    {
        const bool branch_taken_0x117170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117170) {
            ctx->pc = 0x117174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117170u;
            // 0x117174: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117300u;
            goto label_117300;
        }
    }
    ctx->pc = 0x117178u;
    // 0x117178: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x117178u;
    SET_GPR_U32(ctx, 31, 0x117180u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x117178u, 0x117180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117180u;
label_117180:
    // 0x117180: 0xc0821da  jal         func_208768
    ctx->pc = 0x117180u;
    SET_GPR_U32(ctx, 31, 0x117188u);
    ctx->pc = 0x117184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117180u;
    // 0x117184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208768u, 0x117180u, 0x117188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117188u;
label_117188:
    // 0x117188: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11718c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11718Cu;
    {
        const bool branch_taken_0x11718c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11718Cu;
        // 0x117190: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11718c) {
            ctx->pc = 0x1171F4u;
            goto label_1171f4;
        }
    }
    ctx->pc = 0x117194u;
    // 0x117194: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x117194u;
    {
        const bool branch_taken_0x117194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117194u;
        // 0x117198: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117194) {
            ctx->pc = 0x1171D4u;
            goto label_1171d4;
        }
    }
    ctx->pc = 0x11719Cu;
    // 0x11719c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11719Cu;
    {
        const bool branch_taken_0x11719c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11719c) {
            ctx->pc = 0x1171A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11719Cu;
            // 0x1171a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1171B4u;
            goto label_1171b4;
        }
    }
    ctx->pc = 0x1171A4u;
    // 0x1171a4: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1171A4u;
    {
        const bool branch_taken_0x1171a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x1171A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171A4u;
        // 0x1171a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171a4) {
            ctx->pc = 0x1171C4u;
            goto label_1171c4;
        }
    }
    ctx->pc = 0x1171ACu;
    // 0x1171ac: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1171ACu;
    {
        const bool branch_taken_0x1171ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171ACu;
        // 0x1171b0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171ac) {
            ctx->pc = 0x117304u;
            goto label_117304;
        }
    }
    ctx->pc = 0x1171B4u;
label_1171b4:
    // 0x1171b4: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1171B4u;
    {
        const bool branch_taken_0x1171b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1171B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171B4u;
        // 0x1171b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171b4) {
            ctx->pc = 0x1171E4u;
            goto label_1171e4;
        }
    }
    ctx->pc = 0x1171BCu;
    // 0x1171bc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1171BCu;
    {
        const bool branch_taken_0x1171bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171BCu;
        // 0x1171c0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171bc) {
            ctx->pc = 0x117304u;
            goto label_117304;
        }
    }
    ctx->pc = 0x1171C4u;
label_1171c4:
    // 0x1171c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1171c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1171c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1171c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171cc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1171CCu;
    {
        const bool branch_taken_0x1171cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171CCu;
        // 0x1171d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171cc) {
            ctx->pc = 0x1172B8u;
            goto label_1172b8;
        }
    }
    ctx->pc = 0x1171D4u;
label_1171d4:
    // 0x1171d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1171d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1171d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1171d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171dc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1171DCu;
    {
        const bool branch_taken_0x1171dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171DCu;
        // 0x1171e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171dc) {
            ctx->pc = 0x1172B8u;
            goto label_1172b8;
        }
    }
    ctx->pc = 0x1171E4u;
label_1171e4:
    // 0x1171e4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1171e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1171e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1171e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1171ECu;
    {
        const bool branch_taken_0x1171ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171ECu;
        // 0x1171f0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171ec) {
            ctx->pc = 0x1172B8u;
            goto label_1172b8;
        }
    }
    ctx->pc = 0x1171F4u;
label_1171f4:
    // 0x1171f4: 0x1473001a  bne         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1171F4u;
    {
        const bool branch_taken_0x1171f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1171F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F4u;
        // 0x1171f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171f4) {
            ctx->pc = 0x117260u;
            goto label_117260;
        }
    }
    ctx->pc = 0x1171FCu;
    // 0x1171fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1171fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117200: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x117200u;
    {
        const bool branch_taken_0x117200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117200u;
        // 0x117204: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117200) {
            ctx->pc = 0x117240u;
            goto label_117240;
        }
    }
    ctx->pc = 0x117208u;
    // 0x117208: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117208u;
    {
        const bool branch_taken_0x117208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117208) {
            ctx->pc = 0x11720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117208u;
            // 0x11720c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117220u;
            goto label_117220;
        }
    }
    ctx->pc = 0x117210u;
    // 0x117210: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x117210u;
    {
        const bool branch_taken_0x117210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x117214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117210u;
        // 0x117214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117210) {
            ctx->pc = 0x117230u;
            goto label_117230;
        }
    }
    ctx->pc = 0x117218u;
    // 0x117218: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x117218u;
    {
        const bool branch_taken_0x117218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117218u;
        // 0x11721c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117218) {
            ctx->pc = 0x117304u;
            goto label_117304;
        }
    }
    ctx->pc = 0x117220u;
label_117220:
    // 0x117220: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x117220u;
    {
        const bool branch_taken_0x117220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117220u;
        // 0x117224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117220) {
            ctx->pc = 0x117250u;
            goto label_117250;
        }
    }
    ctx->pc = 0x117228u;
    // 0x117228: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x117228u;
    {
        const bool branch_taken_0x117228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117228u;
        // 0x11722c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117228) {
            ctx->pc = 0x117304u;
            goto label_117304;
        }
    }
    ctx->pc = 0x117230u;
label_117230:
    // 0x117230: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117238: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x117238u;
    {
        const bool branch_taken_0x117238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117238u;
        // 0x11723c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117238) {
            ctx->pc = 0x1172B8u;
            goto label_1172b8;
        }
    }
    ctx->pc = 0x117240u;
label_117240:
    // 0x117240: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117248: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x117248u;
    {
        const bool branch_taken_0x117248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117248u;
        // 0x11724c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117248) {
            ctx->pc = 0x1172B8u;
            goto label_1172b8;
        }
    }
    ctx->pc = 0x117250u;
label_117250:
    // 0x117250: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117258: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x117258u;
    {
        const bool branch_taken_0x117258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117258u;
        // 0x11725c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117258) {
            ctx->pc = 0x1172B8u;
            goto label_1172b8;
        }
    }
    ctx->pc = 0x117260u;
label_117260:
    // 0x117260: 0x54620027  bnel        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x117260u;
    {
        const bool branch_taken_0x117260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x117260) {
            ctx->pc = 0x117264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117260u;
            // 0x117264: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117300u;
            goto label_117300;
        }
    }
    ctx->pc = 0x117268u;
    // 0x117268: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x117268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11726c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11726Cu;
    {
        const bool branch_taken_0x11726c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11726Cu;
        // 0x117270: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11726c) {
            ctx->pc = 0x1172ACu;
            goto label_1172ac;
        }
    }
    ctx->pc = 0x117274u;
    // 0x117274: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117274u;
    {
        const bool branch_taken_0x117274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117274) {
            ctx->pc = 0x117278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117274u;
            // 0x117278: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11728Cu;
            goto label_11728c;
        }
    }
    ctx->pc = 0x11727Cu;
    // 0x11727c: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x11727Cu;
    {
        const bool branch_taken_0x11727c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x117280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11727Cu;
        // 0x117280: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11727c) {
            ctx->pc = 0x11729Cu;
            goto label_11729c;
        }
    }
    ctx->pc = 0x117284u;
    // 0x117284: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x117284u;
    {
        const bool branch_taken_0x117284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117284u;
        // 0x117288: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117284) {
            ctx->pc = 0x117304u;
            goto label_117304;
        }
    }
    ctx->pc = 0x11728Cu;
label_11728c:
    // 0x11728c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11728Cu;
    {
        const bool branch_taken_0x11728c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11728Cu;
        // 0x117290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11728c) {
            ctx->pc = 0x1172D8u;
            goto label_1172d8;
        }
    }
    ctx->pc = 0x117294u;
    // 0x117294: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x117294u;
    {
        const bool branch_taken_0x117294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117294u;
        // 0x117298: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117294) {
            ctx->pc = 0x117304u;
            goto label_117304;
        }
    }
    ctx->pc = 0x11729Cu;
label_11729c:
    // 0x11729c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x11729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1172a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1172a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1172A4u;
    {
        const bool branch_taken_0x1172a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172A4u;
        // 0x1172a8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172a4) {
            ctx->pc = 0x1172B8u;
            goto label_1172b8;
        }
    }
    ctx->pc = 0x1172ACu;
label_1172ac:
    // 0x1172ac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1172acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1172b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1172b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172b4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1172b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1172b8:
    // 0x1172b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1172b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1172bc: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1172bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1172c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1172c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1172c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1172c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1172c8: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x1172C8u;
    SET_GPR_U32(ctx, 31, 0x1172D0u);
    ctx->pc = 0x1172CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172C8u;
    // 0x1172cc: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x1172C8u, 0x1172D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172D0u;
label_1172d0:
    // 0x1172d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1172D0u;
    {
        const bool branch_taken_0x1172d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172D0u;
        // 0x1172d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172d0) {
            ctx->pc = 0x117300u;
            goto label_117300;
        }
    }
    ctx->pc = 0x1172D8u;
label_1172d8:
    // 0x1172d8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1172d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1172dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1172dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172e0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1172e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1172e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1172e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1172e8: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1172e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1172ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1172ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1172f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1172f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1172f4: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x1172F4u;
    SET_GPR_U32(ctx, 31, 0x1172FCu);
    ctx->pc = 0x1172F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172F4u;
    // 0x1172f8: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x1172F4u, 0x1172FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172FCu;
label_1172fc:
    // 0x1172fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1172fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117300:
    // 0x117300: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_117304:
    // 0x117304: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x117304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117308: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x117308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11730c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117310: 0x3e00008  jr          $ra
    ctx->pc = 0x117310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117310u;
        // 0x117314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117318u;
}
