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

// Function: sub_002AC210
// Address: 0x2ac210 - 0x2ac2a0
void sub_002AC210_0x2ac210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC210_0x2ac210");
#endif

    switch (ctx->pc) {
        case 0x2ac23cu: goto label_2ac23c;
        case 0x2ac248u: goto label_2ac248;
        case 0x2ac254u: goto label_2ac254;
        case 0x2ac260u: goto label_2ac260;
        case 0x2ac26cu: goto label_2ac26c;
        case 0x2ac278u: goto label_2ac278;
        case 0x2ac284u: goto label_2ac284;
        case 0x2ac290u: goto label_2ac290;
        default: break;
    }

    ctx->pc = 0x2ac210u;

    // 0x2ac210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac218: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ac218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ac21c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AC21Cu;
    {
        const bool branch_taken_0x2ac21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC21Cu;
        // 0x2ac220: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac21c) {
            ctx->pc = 0x2AC290u;
            goto label_2ac290;
        }
    }
    ctx->pc = 0x2AC224u;
    // 0x2ac224: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2ac224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2ac228: 0x8c62a9d4  lw          $v0, -0x562C($v1)
    ctx->pc = 0x2ac228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945236)));
    // 0x2ac22c: 0x24842448  addiu       $a0, $a0, 0x2448
    ctx->pc = 0x2ac22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9288));
    // 0x2ac230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac234: 0xc0abb68  jal         func_2AEDA0
    ctx->pc = 0x2AC234u;
    SET_GPR_U32(ctx, 31, 0x2AC23Cu);
    ctx->pc = 0x2AC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC234u;
    // 0x2ac238: 0xac62a9d4  sw          $v0, -0x562C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEDA0u, 0x2AC234u, 0x2AC23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC23Cu;
label_2ac23c:
    // 0x2ac23c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2ac23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2ac240: 0xc0ab122  jal         func_2AC488
    ctx->pc = 0x2AC240u;
    SET_GPR_U32(ctx, 31, 0x2AC248u);
    ctx->pc = 0x2AC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC240u;
    // 0x2ac244: 0x24842408  addiu       $a0, $a0, 0x2408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC488u, 0x2AC240u, 0x2AC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC248u;
label_2ac248:
    // 0x2ac248: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac24c: 0xc041cf0  jal         func_1073C0
    ctx->pc = 0x2AC24Cu;
    SET_GPR_U32(ctx, 31, 0x2AC254u);
    ctx->pc = 0x2AC250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC24Cu;
    // 0x2ac250: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1073C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073C0u, 0x2AC24Cu, 0x2AC254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC254u;
label_2ac254:
    // 0x2ac254: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac258: 0xc04ad1a  jal         func_12B468
    ctx->pc = 0x2AC258u;
    SET_GPR_U32(ctx, 31, 0x2AC260u);
    ctx->pc = 0x2AC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC258u;
    // 0x2ac25c: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B468u, 0x2AC258u, 0x2AC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC260u;
label_2ac260:
    // 0x2ac260: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac264: 0xc046588  jal         func_119620
    ctx->pc = 0x2AC264u;
    SET_GPR_U32(ctx, 31, 0x2AC26Cu);
    ctx->pc = 0x2AC268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC264u;
    // 0x2ac268: 0x248487a0  addiu       $a0, $a0, -0x7860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119620u, 0x2AC264u, 0x2AC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC26Cu;
label_2ac26c:
    // 0x2ac26c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac270: 0xc047f92  jal         func_11FE48
    ctx->pc = 0x2AC270u;
    SET_GPR_U32(ctx, 31, 0x2AC278u);
    ctx->pc = 0x2AC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC270u;
    // 0x2ac274: 0x24849e60  addiu       $a0, $a0, -0x61A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE48u, 0x2AC270u, 0x2AC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC278u;
label_2ac278:
    // 0x2ac278: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac27c: 0xc04848a  jal         func_121228
    ctx->pc = 0x2AC27Cu;
    SET_GPR_U32(ctx, 31, 0x2AC284u);
    ctx->pc = 0x2AC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC27Cu;
    // 0x2ac280: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121228u, 0x2AC27Cu, 0x2AC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC284u;
label_2ac284:
    // 0x2ac284: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac288: 0xc046e86  jal         func_11BA18
    ctx->pc = 0x2AC288u;
    SET_GPR_U32(ctx, 31, 0x2AC290u);
    ctx->pc = 0x2AC28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC288u;
    // 0x2ac28c: 0x248499f0  addiu       $a0, $a0, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA18u, 0x2AC288u, 0x2AC290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC290u;
label_2ac290:
    // 0x2ac290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac294: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC294u;
        // 0x2ac298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC29Cu;
    // 0x2ac29c: 0x0  nop
    ctx->pc = 0x2ac29cu;
    // NOP
    ctx->pc = 0x2ac2a0u;
}
