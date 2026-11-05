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

// Function: sub_003A5230
// Address: 0x3a5230 - 0x3a52f8
void sub_003A5230_0x3a5230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5230_0x3a5230");
#endif

    switch (ctx->pc) {
        case 0x3a5278u: goto label_3a5278;
        case 0x3a52a0u: goto label_3a52a0;
        default: break;
    }

    ctx->pc = 0x3a5230u;

    // 0x3a5230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a5230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a5234: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a5234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a5238: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3a5238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a523c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a5240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a5240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a5244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a5248: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a5248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a524c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a5250: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a5250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5254: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3a5254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3a5258: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3a5258u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a525c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a5260: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a5264: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A5264u;
    {
        const bool branch_taken_0x3a5264 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3A5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5264u;
        // 0x3a5268: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5264) {
            ctx->pc = 0x3A52C8u;
            goto label_3a52c8;
        }
    }
    ctx->pc = 0x3A526Cu;
    // 0x3a526c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a5270: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3a5270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5274: 0x24553780  addiu       $s5, $v0, 0x3780
    ctx->pc = 0x3a5274u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 14208));
label_3a5278:
    // 0x3a5278: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x3a527c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3a527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5280: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x3a5280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3a5284: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x3a5284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a5288: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3a5288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a528c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3a528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3a5290: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a5290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a5294: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a5294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a5298: 0xc0e933a  jal         func_3A4CE8
    ctx->pc = 0x3A5298u;
    SET_GPR_U32(ctx, 31, 0x3A52A0u);
    ctx->pc = 0x3A529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5298u;
    // 0x3a529c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CE8u, 0x3A5298u, 0x3A52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A52A0u;
label_3a52a0:
    // 0x3a52a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A52A0u;
    {
        const bool branch_taken_0x3a52a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52A0u;
        // 0x3a52a4: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52a0) {
            ctx->pc = 0x3A52C0u;
            goto label_3a52c0;
        }
    }
    ctx->pc = 0x3A52A8u;
    // 0x3a52a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a52ac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3a52acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3a52b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a52b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A52B4u;
    {
        const bool branch_taken_0x3a52b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52B4u;
        // 0x3a52b8: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52b4) {
            ctx->pc = 0x3A52D0u;
            goto label_3a52d0;
        }
    }
    ctx->pc = 0x3A52BCu;
    // 0x3a52bc: 0x0  nop
    ctx->pc = 0x3a52bcu;
    // NOP
label_3a52c0:
    // 0x3a52c0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3A52C0u;
    {
        const bool branch_taken_0x3a52c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52C0u;
        // 0x3a52c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52c0) {
            ctx->pc = 0x3A5278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5278;
        }
    }
    ctx->pc = 0x3A52C8u;
label_3a52c8:
    // 0x3a52c8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3a52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x3a52cc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3a52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3a52d0:
    // 0x3a52d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a52d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a52d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a52d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a52d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a52d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a52dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a52dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a52e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a52e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a52e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a52e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a52e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3a52e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a52ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a52ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a52f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A52F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52F0u;
        // 0x3a52f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A52F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A52F8u;
}
