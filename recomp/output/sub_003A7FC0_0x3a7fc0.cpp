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

// Function: sub_003A7FC0
// Address: 0x3a7fc0 - 0x3a8148
void sub_003A7FC0_0x3a7fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7FC0_0x3a7fc0");
#endif

    switch (ctx->pc) {
        case 0x3a801cu: goto label_3a801c;
        case 0x3a8054u: goto label_3a8054;
        case 0x3a808cu: goto label_3a808c;
        case 0x3a80b0u: goto label_3a80b0;
        case 0x3a80d0u: goto label_3a80d0;
        case 0x3a80e4u: goto label_3a80e4;
        case 0x3a80f8u: goto label_3a80f8;
        case 0x3a8100u: goto label_3a8100;
        case 0x3a8128u: goto label_3a8128;
        default: break;
    }

    ctx->pc = 0x3a7fc0u;

    // 0x3a7fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a7fc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a7fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a7fc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a7fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7fcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a7fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a7fd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a7fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7fd4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3a7fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3a7fd8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a7fd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7fdc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a7fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a7fe0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7FE0u;
    {
        const bool branch_taken_0x3a7fe0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FE0u;
        // 0x3a7fe4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fe0) {
            ctx->pc = 0x3A7FF8u;
            goto label_3a7ff8;
        }
    }
    ctx->pc = 0x3A7FE8u;
    // 0x3a7fe8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a7fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a7fec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7FECu;
    {
        const bool branch_taken_0x3a7fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FECu;
        // 0x3a7ff0: 0x24a5e5c0  addiu       $a1, $a1, -0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fec) {
            ctx->pc = 0x3A8014u;
            goto label_3a8014;
        }
    }
    ctx->pc = 0x3A7FF4u;
    // 0x3a7ff4: 0x0  nop
    ctx->pc = 0x3a7ff4u;
    // NOP
label_3a7ff8:
    // 0x3a7ff8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7FF8u;
    {
        const bool branch_taken_0x3a7ff8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FF8u;
        // 0x3a7ffc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ff8) {
            ctx->pc = 0x3A8008u;
            goto label_3a8008;
        }
    }
    ctx->pc = 0x3A8000u;
    // 0x3a8000: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8000u;
    {
        const bool branch_taken_0x3a8000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8000u;
        // 0x3a8004: 0x24a5e5e0  addiu       $a1, $a1, -0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8000) {
            ctx->pc = 0x3A8014u;
            goto label_3a8014;
        }
    }
    ctx->pc = 0x3A8008u;
label_3a8008:
    // 0x3a8008: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8008u;
    {
        const bool branch_taken_0x3a8008 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8008u;
        // 0x3a800c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8008) {
            ctx->pc = 0x3A8028u;
            goto label_3a8028;
        }
    }
    ctx->pc = 0x3A8010u;
    // 0x3a8010: 0x24a5e600  addiu       $a1, $a1, -0x1A00
    ctx->pc = 0x3a8010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960640));
label_3a8014:
    // 0x3a8014: 0xc0e9ebe  jal         func_3A7AF8
    ctx->pc = 0x3A8014u;
    SET_GPR_U32(ctx, 31, 0x3A801Cu);
    ctx->pc = 0x3A7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AF8u, 0x3A8014u, 0x3A801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A801Cu;
label_3a801c:
    // 0x3a801c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3A801Cu;
    {
        const bool branch_taken_0x3a801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A801Cu;
        // 0x3a8020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a801c) {
            ctx->pc = 0x3A812Cu;
            goto label_3a812c;
        }
    }
    ctx->pc = 0x3A8024u;
    // 0x3a8024: 0x0  nop
    ctx->pc = 0x3a8024u;
    // NOP
label_3a8028:
    // 0x3a8028: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8028u;
    {
        const bool branch_taken_0x3a8028 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8028) {
            ctx->pc = 0x3A802Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8028u;
            // 0x3a802c: 0x82430001  lb          $v1, 0x1($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8040u;
            goto label_3a8040;
        }
    }
    ctx->pc = 0x3A8030u;
    // 0x3a8030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a8034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8038: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3A8038u;
    {
        const bool branch_taken_0x3a8038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8038u;
        // 0x3a803c: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8038) {
            ctx->pc = 0x3A812Cu;
            goto label_3a812c;
        }
    }
    ctx->pc = 0x3A8040u;
label_3a8040:
    // 0x3a8040: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3a8040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a8044: 0x10710039  beq         $v1, $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A8044u;
    {
        const bool branch_taken_0x3a8044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8044u;
        // 0x3a8048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8044) {
            ctx->pc = 0x3A812Cu;
            goto label_3a812c;
        }
    }
    ctx->pc = 0x3A804Cu;
    // 0x3a804c: 0xc0e9eac  jal         func_3A7AB0
    ctx->pc = 0x3A804Cu;
    SET_GPR_U32(ctx, 31, 0x3A8054u);
    ctx->pc = 0x3A7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AB0u, 0x3A804Cu, 0x3A8054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8054u;
label_3a8054:
    // 0x3a8054: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3a8054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x3a8058: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3a8058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3a805c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3a805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3a8060: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3a8060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3a8064: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a8064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a8068: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x3a8068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a806c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3a806cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3a8070: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x3a8070u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x3a8074: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x3a8074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a8078: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8078u;
    {
        const bool branch_taken_0x3a8078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8078u;
        // 0x3a807c: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8078) {
            ctx->pc = 0x3A8098u;
            goto label_3a8098;
        }
    }
    ctx->pc = 0x3A8080u;
    // 0x3a8080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8084: 0xc0e9eb2  jal         func_3A7AC8
    ctx->pc = 0x3A8084u;
    SET_GPR_U32(ctx, 31, 0x3A808Cu);
    ctx->pc = 0x3A8088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8084u;
    // 0x3a8088: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AC8u, 0x3A8084u, 0x3A808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A808Cu;
label_3a808c:
    // 0x3a808c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3A808Cu;
    {
        const bool branch_taken_0x3a808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A808Cu;
        // 0x3a8090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a808c) {
            ctx->pc = 0x3A812Cu;
            goto label_3a812c;
        }
    }
    ctx->pc = 0x3A8094u;
    // 0x3a8094: 0x0  nop
    ctx->pc = 0x3a8094u;
    // NOP
label_3a8098:
    // 0x3a8098: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x3a8098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x3a809c: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x3a809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3a80a0: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x3a80a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x3a80a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a80a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80a8: 0xc0e9ef0  jal         func_3A7BC0
    ctx->pc = 0x3A80A8u;
    SET_GPR_U32(ctx, 31, 0x3A80B0u);
    ctx->pc = 0x3A80ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80A8u;
    // 0x3a80ac: 0xa2510001  sb          $s1, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7BC0u, 0x3A80A8u, 0x3A80B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80B0u;
label_3a80b0:
    // 0x3a80b0: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3a80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3a80b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a80b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a80bc: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x3a80bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x3a80c0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a80c4: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x3a80c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a80c8: 0xc0e9eb2  jal         func_3A7AC8
    ctx->pc = 0x3A80C8u;
    SET_GPR_U32(ctx, 31, 0x3A80D0u);
    ctx->pc = 0x3A80CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80C8u;
    // 0x3a80cc: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AC8u, 0x3A80C8u, 0x3A80D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80D0u;
label_3a80d0:
    // 0x3a80d0: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x3a80d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3a80d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a80d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80d8: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x3a80d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x3a80dc: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3A80DCu;
    SET_GPR_U32(ctx, 31, 0x3A80E4u);
    ctx->pc = 0x3A80E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80DCu;
    // 0x3a80e0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3A80DCu, 0x3A80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80E4u;
label_3a80e4:
    // 0x3a80e4: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x3a80e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x3a80e8: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x3a80e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3a80ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a80ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80f0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A80F0u;
    SET_GPR_U32(ctx, 31, 0x3A80F8u);
    ctx->pc = 0x3A80F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80F0u;
    // 0x3a80f4: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A80F0u, 0x3A80F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80F8u;
label_3a80f8:
    // 0x3a80f8: 0xc0e9eac  jal         func_3A7AB0
    ctx->pc = 0x3A80F8u;
    SET_GPR_U32(ctx, 31, 0x3A8100u);
    ctx->pc = 0x3A7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AB0u, 0x3A80F8u, 0x3A8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8100u;
label_3a8100:
    // 0x3a8100: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x3a8100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3a8104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a8104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8108: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3a8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3a810c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3a810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3a8110: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3a8110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a8114: 0xa2450001  sb          $a1, 0x1($s2)
    ctx->pc = 0x3a8114u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a8118: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a8118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a811c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3a811cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x3a8120: 0xc0e9eb2  jal         func_3A7AC8
    ctx->pc = 0x3A8120u;
    SET_GPR_U32(ctx, 31, 0x3A8128u);
    ctx->pc = 0x3A8124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8120u;
    // 0x3a8124: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AC8u, 0x3A8120u, 0x3A8128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8128u;
label_3a8128:
    // 0x3a8128: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3a8128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3a812c:
    // 0x3a812c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a812cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8130: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a8130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a8134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a8134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8138: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3a8138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a813c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a813cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a8140: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8140u;
        // 0x3a8144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8148u;
}
