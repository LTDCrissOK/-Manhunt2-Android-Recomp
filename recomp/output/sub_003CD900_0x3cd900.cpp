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

// Function: sub_003CD900
// Address: 0x3cd900 - 0x3cd9f0
void sub_003CD900_0x3cd900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD900_0x3cd900");
#endif

    switch (ctx->pc) {
        case 0x3cd958u: goto label_3cd958;
        case 0x3cd980u: goto label_3cd980;
        case 0x3cd99cu: goto label_3cd99c;
        default: break;
    }

    ctx->pc = 0x3cd900u;

    // 0x3cd900: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3cd900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3cd904: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x3cd904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x3cd908: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x3cd908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x3cd90c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3cd90cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd910: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3cd910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x3cd914: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3cd914u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd918: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x3cd918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x3cd91c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3cd91cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd920: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3cd920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3cd924: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x3cd924u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd928: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3cd928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3cd92c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x3cd92cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd930: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3cd930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3cd934: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x3cd934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd938: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3cd938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3cd93c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3cd93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd940: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3cd940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3cd944: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3cd944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd948: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3cd948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3cd94c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3cd94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3cd950: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3cd950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3cd954: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3cd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3cd958:
    // 0x3cd958: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3cd958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd95c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3cd95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd960: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3cd960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd964: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3cd964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3cd968: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3cd968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd96c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3cd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3cd970: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3cd970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd974: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3cd974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd978: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3CD978u;
    SET_GPR_U32(ctx, 31, 0x3CD980u);
    ctx->pc = 0x3CD97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD978u;
    // 0x3cd97c: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3CD978u, 0x3CD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD980u;
label_3cd980:
    // 0x3cd980: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x3cd980u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3cd984: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x3CD984u;
    {
        const bool branch_taken_0x3cd984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD984u;
        // 0x3cd988: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd984) {
            ctx->pc = 0x3CD9B8u;
            goto label_3cd9b8;
        }
    }
    ctx->pc = 0x3CD98Cu;
    // 0x3cd98c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3CD98Cu;
    {
        const bool branch_taken_0x3cd98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD98Cu;
        // 0x3cd990: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd98c) {
            ctx->pc = 0x3CD9B8u;
            goto label_3cd9b8;
        }
    }
    ctx->pc = 0x3CD994u;
    // 0x3cd994: 0xc0f29ec  jal         func_3CA7B0
    ctx->pc = 0x3CD994u;
    SET_GPR_U32(ctx, 31, 0x3CD99Cu);
    ctx->pc = 0x3CD998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD994u;
    // 0x3cd998: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA7B0u, 0x3CD994u, 0x3CD99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD99Cu;
label_3cd99c:
    // 0x3cd99c: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x3cd99cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x3cd9a0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3CD9A0u;
    {
        const bool branch_taken_0x3cd9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd9a0) {
            ctx->pc = 0x3CD9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD9A0u;
            // 0x3cd9a4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD9A8u;
            goto label_3cd9a8;
        }
    }
    ctx->pc = 0x3CD9A8u;
label_3cd9a8:
    // 0x3cd9a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3cd9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3cd9ac: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x3cd9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x3cd9b0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3CD9B0u;
    {
        const bool branch_taken_0x3cd9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9B0u;
        // 0x3cd9b4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd9b0) {
            ctx->pc = 0x3CD958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd958;
        }
    }
    ctx->pc = 0x3CD9B8u;
label_3cd9b8:
    // 0x3cd9b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cd9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd9bc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3cd9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3cd9c0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x3cd9c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3cd9c4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x3cd9c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3cd9c8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x3cd9c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cd9cc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x3cd9ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cd9d0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3cd9d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cd9d4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3cd9d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cd9d8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3cd9d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cd9dc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3cd9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cd9e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3cd9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9E4u;
        // 0x3cd9e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD9ECu;
    // 0x3cd9ec: 0x0  nop
    ctx->pc = 0x3cd9ecu;
    // NOP
    ctx->pc = 0x3cd9f0u;
}
