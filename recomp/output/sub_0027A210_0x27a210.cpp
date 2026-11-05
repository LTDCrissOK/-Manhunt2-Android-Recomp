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

// Function: sub_0027A210
// Address: 0x27a210 - 0x27a388
void sub_0027A210_0x27a210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A210_0x27a210");
#endif

    switch (ctx->pc) {
        case 0x27a240u: goto label_27a240;
        case 0x27a278u: goto label_27a278;
        case 0x27a288u: goto label_27a288;
        case 0x27a2b4u: goto label_27a2b4;
        case 0x27a314u: goto label_27a314;
        default: break;
    }

    ctx->pc = 0x27a210u;

    // 0x27a210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a218: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27a218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27a21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a220: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27a220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27a224: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27a224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a228: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27a228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27a22c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27a22cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27a234: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27a234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a238: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x27A238u;
    {
        const bool branch_taken_0x27a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A238u;
        // 0x27a23c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a238) {
            ctx->pc = 0x27A340u;
            goto label_27a340;
        }
    }
    ctx->pc = 0x27A240u;
label_27a240:
    // 0x27a240: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x27a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27a244: 0x8e041010  lw          $a0, 0x1010($s0)
    ctx->pc = 0x27a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    // 0x27a248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a24c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x27a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27a250: 0xae021030  sw          $v0, 0x1030($s0)
    ctx->pc = 0x27a250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4144), GPR_U32(ctx, 2));
    // 0x27a254: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x27a254u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27a258: 0x2ca21000  sltiu       $v0, $a1, 0x1000
    ctx->pc = 0x27a258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x27a25c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A25Cu;
    {
        const bool branch_taken_0x27a25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A25Cu;
        // 0x27a260: 0xae031034  sw          $v1, 0x1034($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a25c) {
            ctx->pc = 0x27A268u;
            goto label_27a268;
        }
    }
    ctx->pc = 0x27A264u;
    // 0x27a264: 0xae051034  sw          $a1, 0x1034($s0)
    ctx->pc = 0x27a264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4148), GPR_U32(ctx, 5));
label_27a268:
    // 0x27a268: 0x8e021034  lw          $v0, 0x1034($s0)
    ctx->pc = 0x27a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4148)));
    // 0x27a26c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x27A26Cu;
    {
        const bool branch_taken_0x27a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a26c) {
            ctx->pc = 0x27A270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A26Cu;
            // 0x27a270: 0x8e031034  lw          $v1, 0x1034($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A29Cu;
            goto label_27a29c;
        }
    }
    ctx->pc = 0x27A274u;
    // 0x27a274: 0x8e021024  lw          $v0, 0x1024($s0)
    ctx->pc = 0x27a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4132)));
label_27a278:
    // 0x27a278: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A278u;
    {
        const bool branch_taken_0x27a278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A278u;
        // 0x27a27c: 0x26041020  addiu       $a0, $s0, 0x1020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a278) {
            ctx->pc = 0x27A298u;
            goto label_27a298;
        }
    }
    ctx->pc = 0x27A280u;
    // 0x27a280: 0xc0e03c2  jal         func_380F08
    ctx->pc = 0x27A280u;
    SET_GPR_U32(ctx, 31, 0x27A288u);
    ctx->pc = 0x27A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A280u;
    // 0x27a284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380F08u, 0x27A280u, 0x27A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A288u;
label_27a288:
    // 0x27a288: 0x8e031034  lw          $v1, 0x1034($s0)
    ctx->pc = 0x27a288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4148)));
    // 0x27a28c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27A28Cu;
    {
        const bool branch_taken_0x27a28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a28c) {
            ctx->pc = 0x27A290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A28Cu;
            // 0x27a290: 0x8e021024  lw          $v0, 0x1024($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a278;
        }
    }
    ctx->pc = 0x27A294u;
    // 0x27a294: 0x0  nop
    ctx->pc = 0x27a294u;
    // NOP
label_27a298:
    // 0x27a298: 0x8e031034  lw          $v1, 0x1034($s0)
    ctx->pc = 0x27a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4148)));
label_27a29c:
    // 0x27a29c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x27a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27a2a0: 0xae111018  sw          $s1, 0x1018($s0)
    ctx->pc = 0x27a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4120), GPR_U32(ctx, 17));
    // 0x27a2a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a2a8: 0xae021014  sw          $v0, 0x1014($s0)
    ctx->pc = 0x27a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4116), GPR_U32(ctx, 2));
    // 0x27a2ac: 0x8e021014  lw          $v0, 0x1014($s0)
    ctx->pc = 0x27a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
    // 0x27a2b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a2b4:
    // 0x27a2b4: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x27a2b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x27a2b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2bc: 0x243880a  movz        $s1, $s2, $v1
    ctx->pc = 0x27a2bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    // 0x27a2c0: 0x56240010  bnel        $s1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27A2C0u;
    {
        const bool branch_taken_0x27a2c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x27a2c0) {
            ctx->pc = 0x27A2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A2C0u;
            // 0x27a2c4: 0x8e051018  lw          $a1, 0x1018($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A304u;
            goto label_27a304;
        }
    }
    ctx->pc = 0x27A2C8u;
    // 0x27a2c8: 0x8e021018  lw          $v0, 0x1018($s0)
    ctx->pc = 0x27a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4120)));
    // 0x27a2cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27a2ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27a2d0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x27a2d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x27a2d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27a2d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a2d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a2dc: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x27a2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27a2e0: 0xae021018  sw          $v0, 0x1018($s0)
    ctx->pc = 0x27a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4120), GPR_U32(ctx, 2));
    // 0x27a2e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27a2e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27a2e8: 0x8e021010  lw          $v0, 0x1010($s0)
    ctx->pc = 0x27a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    // 0x27a2ec: 0x8e031014  lw          $v1, 0x1014($s0)
    ctx->pc = 0x27a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
    // 0x27a2f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a2f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27a2f8: 0xae021010  sw          $v0, 0x1010($s0)
    ctx->pc = 0x27a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4112), GPR_U32(ctx, 2));
    // 0x27a2fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27A2FCu;
    {
        const bool branch_taken_0x27a2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2FCu;
        // 0x27a300: 0xae031014  sw          $v1, 0x1014($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2fc) {
            ctx->pc = 0x27A340u;
            goto label_27a340;
        }
    }
    ctx->pc = 0x27A304u;
label_27a304:
    // 0x27a304: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27a304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a308: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27a308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a30c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x27A30Cu;
    SET_GPR_U32(ctx, 31, 0x27A314u);
    ctx->pc = 0x27A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A30Cu;
    // 0x27a310: 0x291a021  addu        $s4, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x27A30Cu, 0x27A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A314u;
label_27a314:
    // 0x27a314: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x27a314u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x27a318: 0x8e021010  lw          $v0, 0x1010($s0)
    ctx->pc = 0x27a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    // 0x27a31c: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x27a31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x27a320: 0x8e031018  lw          $v1, 0x1018($s0)
    ctx->pc = 0x27a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4120)));
    // 0x27a324: 0x8e041014  lw          $a0, 0x1014($s0)
    ctx->pc = 0x27a324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
    // 0x27a328: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27a328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27a32c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x27a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x27a330: 0xae021010  sw          $v0, 0x1010($s0)
    ctx->pc = 0x27a330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4112), GPR_U32(ctx, 2));
    // 0x27a334: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x27a334u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x27a338: 0xae031018  sw          $v1, 0x1018($s0)
    ctx->pc = 0x27a338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4120), GPR_U32(ctx, 3));
    // 0x27a33c: 0xae041014  sw          $a0, 0x1014($s0)
    ctx->pc = 0x27a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4116), GPR_U32(ctx, 4));
label_27a340:
    // 0x27a340: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A340u;
    {
        const bool branch_taken_0x27a340 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x27A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A340u;
        // 0x27a344: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a340) {
            ctx->pc = 0x27A364u;
            goto label_27a364;
        }
    }
    ctx->pc = 0x27A348u;
    // 0x27a348: 0x8e021014  lw          $v0, 0x1014($s0)
    ctx->pc = 0x27a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
    // 0x27a34c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x27A34Cu;
    {
        const bool branch_taken_0x27a34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A34Cu;
        // 0x27a350: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a34c) {
            ctx->pc = 0x27A2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a2b4;
        }
    }
    ctx->pc = 0x27A354u;
    // 0x27a354: 0x8e021024  lw          $v0, 0x1024($s0)
    ctx->pc = 0x27a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4132)));
    // 0x27a358: 0x5440ffb9  bnel        $v0, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x27A358u;
    {
        const bool branch_taken_0x27a358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a358) {
            ctx->pc = 0x27A35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A358u;
            // 0x27a35c: 0x8e05100c  lw          $a1, 0x100C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a240;
        }
    }
    ctx->pc = 0x27A360u;
    // 0x27a360: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27a360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27a364:
    // 0x27a364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27a368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a36c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27a36cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a370: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27a370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27a374: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27a374u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a378: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27a378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a37c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A37Cu;
        // 0x27a380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A384u;
    // 0x27a384: 0x0  nop
    ctx->pc = 0x27a384u;
    // NOP
    ctx->pc = 0x27a388u;
}
