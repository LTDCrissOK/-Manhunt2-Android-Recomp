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

// Function: sub_003CEFD8
// Address: 0x3cefd8 - 0x3cf0a0
void sub_003CEFD8_0x3cefd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CEFD8_0x3cefd8");
#endif

    switch (ctx->pc) {
        case 0x3ceff8u: goto label_3ceff8;
        case 0x3cf010u: goto label_3cf010;
        case 0x3cf018u: goto label_3cf018;
        case 0x3cf020u: goto label_3cf020;
        case 0x3cf03cu: goto label_3cf03c;
        case 0x3cf050u: goto label_3cf050;
        case 0x3cf064u: goto label_3cf064;
        case 0x3cf084u: goto label_3cf084;
        default: break;
    }

    ctx->pc = 0x3cefd8u;

    // 0x3cefd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cefd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cefdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3cefdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3cefe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cefe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cefe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cefe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3cefe8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3cefe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3cefec: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3cefecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ceff0: 0xc0f379c  jal         func_3CDE70
    ctx->pc = 0x3CEFF0u;
    SET_GPR_U32(ctx, 31, 0x3CEFF8u);
    ctx->pc = 0x3CEFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEFF0u;
    // 0x3ceff4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDE70u, 0x3CEFF0u, 0x3CEFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEFF8u;
label_3ceff8:
    // 0x3ceff8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3ceff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3ceffc: 0x8c62d68c  lw          $v0, -0x2974($v1)
    ctx->pc = 0x3ceffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D68Cu));
    // 0x3cf000: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF000u;
    {
        const bool branch_taken_0x3cf000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf000) {
            ctx->pc = 0x3CF010u;
            goto label_3cf010;
        }
    }
    ctx->pc = 0x3CF008u;
    // 0x3cf008: 0xc0f37be  jal         func_3CDEF8
    ctx->pc = 0x3CF008u;
    SET_GPR_U32(ctx, 31, 0x3CF010u);
    ctx->pc = 0x3CDEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEF8u, 0x3CF008u, 0x3CF010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF010u;
label_3cf010:
    // 0x3cf010: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF010u;
    SET_GPR_U32(ctx, 31, 0x3CF018u);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF010u, 0x3CF018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF018u;
label_3cf018:
    // 0x3cf018: 0xc0f361e  jal         func_3CD878
    ctx->pc = 0x3CF018u;
    SET_GPR_U32(ctx, 31, 0x3CF020u);
    ctx->pc = 0x3CD878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD878u, 0x3CF018u, 0x3CF020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF020u;
label_3cf020:
    // 0x3cf020: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cf020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf024: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF024u;
    {
        const bool branch_taken_0x3cf024 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF024u;
        // 0x3cf028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf024) {
            ctx->pc = 0x3CF034u;
            goto label_3cf034;
        }
    }
    ctx->pc = 0x3CF02Cu;
    // 0x3cf02c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3CF02Cu;
    {
        const bool branch_taken_0x3cf02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF02Cu;
        // 0x3cf030: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf02c) {
            ctx->pc = 0x3CF088u;
            goto label_3cf088;
        }
    }
    ctx->pc = 0x3CF034u;
label_3cf034:
    // 0x3cf034: 0xc0f3b82  jal         func_3CEE08
    ctx->pc = 0x3CF034u;
    SET_GPR_U32(ctx, 31, 0x3CF03Cu);
    ctx->pc = 0x3CF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF034u;
    // 0x3cf038: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CEE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CEE08u, 0x3CF034u, 0x3CF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF03Cu;
label_3cf03c:
    // 0x3cf03c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cf03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf040: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF040u;
    {
        const bool branch_taken_0x3cf040 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3CF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF040u;
        // 0x3cf044: 0x3c100043  lui         $s0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf040) {
            ctx->pc = 0x3CF05Cu;
            goto label_3cf05c;
        }
    }
    ctx->pc = 0x3CF048u;
    // 0x3cf048: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CF048u;
    SET_GPR_U32(ctx, 31, 0x3CF050u);
    ctx->pc = 0x3CF04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF048u;
    // 0x3cf04c: 0x8e04d698  lw          $a0, -0x2968($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CF048u, 0x3CF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF050u;
label_3cf050:
    // 0x3cf050: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3cf050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x3cf054: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3CF054u;
    {
        const bool branch_taken_0x3cf054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF054u;
        // 0x3cf058: 0x8e04d698  lw          $a0, -0x2968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf054) {
            ctx->pc = 0x3CF07Cu;
            goto label_3cf07c;
        }
    }
    ctx->pc = 0x3CF05Cu;
label_3cf05c:
    // 0x3cf05c: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CF05Cu;
    SET_GPR_U32(ctx, 31, 0x3CF064u);
    ctx->pc = 0x3CF060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF05Cu;
    // 0x3cf060: 0x8e04d698  lw          $a0, -0x2968($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CF05Cu, 0x3CF064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF064u;
label_3cf064:
    // 0x3cf064: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cf064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3cf068: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3cf068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3cf06c: 0x24634e40  addiu       $v1, $v1, 0x4E40
    ctx->pc = 0x3cf06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20032));
    // 0x3cf070: 0x8e04d698  lw          $a0, -0x2968($s0)
    ctx->pc = 0x3cf070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956696)));
    // 0x3cf074: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x3cf074u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3cf078: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x3cf078u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_3cf07c:
    // 0x3cf07c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3CF07Cu;
    SET_GPR_U32(ctx, 31, 0x3CF084u);
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3CF07Cu, 0x3CF084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF084u;
label_3cf084:
    // 0x3cf084: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3cf084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cf088:
    // 0x3cf088: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cf088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cf08c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3cf08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cf090: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cf090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cf094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cf094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cf098: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF098u;
        // 0x3cf09c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF0A0u;
}
