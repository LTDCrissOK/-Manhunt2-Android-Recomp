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

// Function: sub_00172200
// Address: 0x172200 - 0x1722a8
void sub_00172200_0x172200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172200_0x172200");
#endif

    switch (ctx->pc) {
        case 0x172218u: goto label_172218;
        case 0x172224u: goto label_172224;
        case 0x172238u: goto label_172238;
        case 0x17224cu: goto label_17224c;
        case 0x172260u: goto label_172260;
        case 0x172274u: goto label_172274;
        case 0x172294u: goto label_172294;
        default: break;
    }

    ctx->pc = 0x172200u;

    // 0x172200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172204: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x172204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x172208: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x172208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17220c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17220cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172210: 0xc05c184  jal         func_170610
    ctx->pc = 0x172210u;
    SET_GPR_U32(ctx, 31, 0x172218u);
    ctx->pc = 0x172214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172210u;
    // 0x172214: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170610u, 0x172210u, 0x172218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172218u;
label_172218:
    // 0x172218: 0x8e1100b0  lw          $s1, 0xB0($s0)
    ctx->pc = 0x172218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x17221c: 0xc05863a  jal         func_1618E8
    ctx->pc = 0x17221Cu;
    SET_GPR_U32(ctx, 31, 0x172224u);
    ctx->pc = 0x172220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17221Cu;
    // 0x172220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1618E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1618E8u, 0x17221Cu, 0x172224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172224u;
label_172224:
    // 0x172224: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x172224u;
    {
        const bool branch_taken_0x172224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172224u;
        // 0x172228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172224) {
            ctx->pc = 0x172230u;
            goto label_172230;
        }
    }
    ctx->pc = 0x17222Cu;
    // 0x17222c: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x17222cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
label_172230:
    // 0x172230: 0xc058636  jal         func_1618D8
    ctx->pc = 0x172230u;
    SET_GPR_U32(ctx, 31, 0x172238u);
    ctx->pc = 0x172234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172230u;
    // 0x172234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1618D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1618D8u, 0x172230u, 0x172238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172238u;
label_172238:
    // 0x172238: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x172238u;
    {
        const bool branch_taken_0x172238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172238u;
        // 0x17223c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172238) {
            ctx->pc = 0x172244u;
            goto label_172244;
        }
    }
    ctx->pc = 0x172240u;
    // 0x172240: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x172240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
label_172244:
    // 0x172244: 0xc05863e  jal         func_1618F8
    ctx->pc = 0x172244u;
    SET_GPR_U32(ctx, 31, 0x17224Cu);
    ctx->pc = 0x172248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172244u;
    // 0x172248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1618F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1618F8u, 0x172244u, 0x17224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17224Cu;
label_17224c:
    // 0x17224c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17224Cu;
    {
        const bool branch_taken_0x17224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17224Cu;
        // 0x172250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17224c) {
            ctx->pc = 0x172258u;
            goto label_172258;
        }
    }
    ctx->pc = 0x172254u;
    // 0x172254: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x172254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
label_172258:
    // 0x172258: 0xc058640  jal         func_161900
    ctx->pc = 0x172258u;
    SET_GPR_U32(ctx, 31, 0x172260u);
    ctx->pc = 0x17225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172258u;
    // 0x17225c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161900u, 0x172258u, 0x172260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172260u;
label_172260:
    // 0x172260: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x172260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x172264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172268: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x172268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x17226c: 0xc05862e  jal         func_1618B8
    ctx->pc = 0x17226Cu;
    SET_GPR_U32(ctx, 31, 0x172274u);
    ctx->pc = 0x172270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17226Cu;
    // 0x172270: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1618B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1618B8u, 0x17226Cu, 0x172274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172274u;
label_172274:
    // 0x172274: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x172274u;
    {
        const bool branch_taken_0x172274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172274u;
        // 0x172278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172274) {
            ctx->pc = 0x172294u;
            goto label_172294;
        }
    }
    ctx->pc = 0x17227Cu;
    // 0x17227c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172280: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x172280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x172284: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x172284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172288: 0xfa010240  sqc2        $vf1, 0x240($s0)
    ctx->pc = 0x172288u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17228c: 0xc05c8aa  jal         func_1722A8
    ctx->pc = 0x17228Cu;
    SET_GPR_U32(ctx, 31, 0x172294u);
    ctx->pc = 0x172290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17228Cu;
    // 0x172290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1722A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1722A8u, 0x17228Cu, 0x172294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172294u;
label_172294:
    // 0x172294: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x172294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172298: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x172298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17229c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1722a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1722A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722A0u;
        // 0x1722a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1722A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1722A8u;
}
