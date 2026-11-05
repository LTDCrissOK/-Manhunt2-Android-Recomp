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

// Function: sub_0035D1E8
// Address: 0x35d1e8 - 0x35d2a0
void sub_0035D1E8_0x35d1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D1E8_0x35d1e8");
#endif

    switch (ctx->pc) {
        case 0x35d224u: goto label_35d224;
        case 0x35d234u: goto label_35d234;
        case 0x35d244u: goto label_35d244;
        case 0x35d258u: goto label_35d258;
        default: break;
    }

    ctx->pc = 0x35d1e8u;

    // 0x35d1e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d1f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35d1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35d1f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35d1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35d1fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35d1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d200: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x35d200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d208: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35d20c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35d210: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35d210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d214: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x35d214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d218: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35d21c: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x35D21Cu;
    SET_GPR_U32(ctx, 31, 0x35D224u);
    ctx->pc = 0x35D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D21Cu;
    // 0x35d220: 0x2548021  addu        $s0, $s2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x35D21Cu, 0x35D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D224u;
label_35d224:
    // 0x35d224: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35D224u;
    {
        const bool branch_taken_0x35d224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D224u;
        // 0x35d228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d224) {
            ctx->pc = 0x35D278u;
            goto label_35d278;
        }
    }
    ctx->pc = 0x35D22Cu;
    // 0x35d22c: 0xc0d73a6  jal         func_35CE98
    ctx->pc = 0x35D22Cu;
    SET_GPR_U32(ctx, 31, 0x35D234u);
    ctx->pc = 0x35D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D22Cu;
    // 0x35d230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE98u, 0x35D22Cu, 0x35D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D234u;
label_35d234:
    // 0x35d234: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x35d234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35d238: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35d238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d23c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x35D23Cu;
    SET_GPR_U32(ctx, 31, 0x35D244u);
    ctx->pc = 0x35D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D23Cu;
    // 0x35d240: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x35D23Cu, 0x35D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D244u;
label_35d244:
    // 0x35d244: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x35d244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35d248: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x35d248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d24c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35d24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d250: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x35D250u;
    SET_GPR_U32(ctx, 31, 0x35D258u);
    ctx->pc = 0x35D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D250u;
    // 0x35d254: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x35D250u, 0x35D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D258u;
label_35d258:
    // 0x35d258: 0xa6300004  sh          $s0, 0x4($s1)
    ctx->pc = 0x35d258u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x35d25c: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x35d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x35d260: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35d260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35d264: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x35d264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x35d268: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35d268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35d26c: 0x9085caf0  lbu         $a1, -0x3510($a0)
    ctx->pc = 0x35d26cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294953712)));
    // 0x35d270: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d274: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x35d274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_35d278:
    // 0x35d278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d27c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35d280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d284: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35d284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d288: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35d288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d28c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35d28cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35d290: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35d290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d294: 0x3e00008  jr          $ra
    ctx->pc = 0x35D294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D294u;
        // 0x35d298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D29Cu;
    // 0x35d29c: 0x0  nop
    ctx->pc = 0x35d29cu;
    // NOP
    ctx->pc = 0x35d2a0u;
}
