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

// Function: sub_003AD280
// Address: 0x3ad280 - 0x3ad320
void sub_003AD280_0x3ad280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD280_0x3ad280");
#endif

    switch (ctx->pc) {
        case 0x3ad280u: goto label_3ad280;
        case 0x3ad284u: goto label_3ad284;
        case 0x3ad288u: goto label_3ad288;
        case 0x3ad28cu: goto label_3ad28c;
        case 0x3ad290u: goto label_3ad290;
        case 0x3ad294u: goto label_3ad294;
        case 0x3ad298u: goto label_3ad298;
        case 0x3ad29cu: goto label_3ad29c;
        case 0x3ad2a0u: goto label_3ad2a0;
        case 0x3ad2a4u: goto label_3ad2a4;
        case 0x3ad2a8u: goto label_3ad2a8;
        case 0x3ad2acu: goto label_3ad2ac;
        case 0x3ad2b0u: goto label_3ad2b0;
        case 0x3ad2b4u: goto label_3ad2b4;
        case 0x3ad2b8u: goto label_3ad2b8;
        case 0x3ad2bcu: goto label_3ad2bc;
        case 0x3ad2c0u: goto label_3ad2c0;
        case 0x3ad2c4u: goto label_3ad2c4;
        case 0x3ad2c8u: goto label_3ad2c8;
        case 0x3ad2ccu: goto label_3ad2cc;
        case 0x3ad2d0u: goto label_3ad2d0;
        case 0x3ad2d4u: goto label_3ad2d4;
        case 0x3ad2d8u: goto label_3ad2d8;
        case 0x3ad2dcu: goto label_3ad2dc;
        case 0x3ad2e0u: goto label_3ad2e0;
        case 0x3ad2e4u: goto label_3ad2e4;
        case 0x3ad2e8u: goto label_3ad2e8;
        case 0x3ad2ecu: goto label_3ad2ec;
        case 0x3ad2f0u: goto label_3ad2f0;
        case 0x3ad2f4u: goto label_3ad2f4;
        case 0x3ad2f8u: goto label_3ad2f8;
        case 0x3ad2fcu: goto label_3ad2fc;
        case 0x3ad300u: goto label_3ad300;
        case 0x3ad304u: goto label_3ad304;
        case 0x3ad308u: goto label_3ad308;
        case 0x3ad30cu: goto label_3ad30c;
        case 0x3ad310u: goto label_3ad310;
        case 0x3ad314u: goto label_3ad314;
        case 0x3ad318u: goto label_3ad318;
        case 0x3ad31cu: goto label_3ad31c;
        default: break;
    }

    ctx->pc = 0x3ad280u;

label_3ad280:
    // 0x3ad280: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ad280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3ad284:
    // 0x3ad284: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad288:
    // 0x3ad288: 0x8c4291b8  lw          $v0, -0x6E48($v0)
    ctx->pc = 0x3ad288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
label_3ad28c:
    // 0x3ad28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ad28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ad290:
    // 0x3ad290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ad290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad294:
    // 0x3ad294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3ad298:
    if (ctx->pc == 0x3AD298u) {
        ctx->pc = 0x3AD298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD294u;
        // 0x3ad298: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD29Cu;
        goto label_3ad29c;
    }
    ctx->pc = 0x3AD294u;
    {
        const bool branch_taken_0x3ad294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD294u;
        // 0x3ad298: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad294) {
            ctx->pc = 0x3AD2B0u;
            goto label_3ad2b0;
        }
    }
    ctx->pc = 0x3AD29Cu;
label_3ad29c:
    // 0x3ad29c: 0x40f809  jalr        $v0
label_3ad2a0:
    if (ctx->pc == 0x3AD2A0u) {
        ctx->pc = 0x3AD2A4u;
        goto label_3ad2a4;
    }
    ctx->pc = 0x3AD29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD2A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD29Cu, 0x3AD2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD2A4u;
label_3ad2a4:
    // 0x3ad2a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3ad2a8:
    if (ctx->pc == 0x3AD2A8u) {
        ctx->pc = 0x3AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2A4u;
        // 0x3ad2a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2ACu;
        goto label_3ad2ac;
    }
    ctx->pc = 0x3AD2A4u;
    {
        const bool branch_taken_0x3ad2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2A4u;
        // 0x3ad2a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad2a4) {
            ctx->pc = 0x3AD2D0u;
            goto label_3ad2d0;
        }
    }
    ctx->pc = 0x3AD2ACu;
label_3ad2ac:
    // 0x3ad2ac: 0x0  nop
    ctx->pc = 0x3ad2acu;
    // NOP
label_3ad2b0:
    // 0x3ad2b0: 0xc0eb26e  jal         func_3AC9B8
label_3ad2b4:
    if (ctx->pc == 0x3AD2B4u) {
        ctx->pc = 0x3AD2B8u;
        goto label_3ad2b8;
    }
    ctx->pc = 0x3AD2B0u;
    SET_GPR_U32(ctx, 31, 0x3AD2B8u);
    ctx->pc = 0x3AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9B8u, 0x3AD2B0u, 0x3AD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2B8u;
label_3ad2b8:
    // 0x3ad2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ad2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad2bc:
    // 0x3ad2bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ad2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad2c0:
    // 0x3ad2c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ad2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3ad2c4:
    // 0x3ad2c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ad2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ad2c8:
    // 0x3ad2c8: 0xc0eb274  jal         func_3AC9D0
label_3ad2cc:
    if (ctx->pc == 0x3AD2CCu) {
        ctx->pc = 0x3AD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2C8u;
        // 0x3ad2cc: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2D0u;
        goto label_3ad2d0;
    }
    ctx->pc = 0x3AD2C8u;
    SET_GPR_U32(ctx, 31, 0x3AD2D0u);
    ctx->pc = 0x3AD2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD2C8u;
    // 0x3ad2cc: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9D0u, 0x3AD2C8u, 0x3AD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2D0u;
label_3ad2d0:
    // 0x3ad2d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ad2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad2d4:
    // 0x3ad2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ad2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad2d8:
    // 0x3ad2d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ad2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ad2dc:
    // 0x3ad2dc: 0x3e00008  jr          $ra
label_3ad2e0:
    if (ctx->pc == 0x3AD2E0u) {
        ctx->pc = 0x3AD2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2DCu;
        // 0x3ad2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2E4u;
        goto label_3ad2e4;
    }
    ctx->pc = 0x3AD2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2DCu;
        // 0x3ad2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD2E4u;
label_3ad2e4:
    // 0x3ad2e4: 0x0  nop
    ctx->pc = 0x3ad2e4u;
    // NOP
label_3ad2e8:
    // 0x3ad2e8: 0x0  nop
    ctx->pc = 0x3ad2e8u;
    // NOP
label_3ad2ec:
    // 0x3ad2ec: 0x0  nop
    ctx->pc = 0x3ad2ecu;
    // NOP
label_3ad2f0:
    // 0x3ad2f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3ad2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3ad2f4:
    // 0x3ad2f4: 0x0  nop
    ctx->pc = 0x3ad2f4u;
    // NOP
label_3ad2f8:
    // 0x3ad2f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3ad2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3ad2fc:
    // 0x3ad2fc: 0x0  nop
    ctx->pc = 0x3ad2fcu;
    // NOP
label_3ad300:
    // 0x3ad300: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3ad300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3ad304:
    // 0x3ad304: 0x0  nop
    ctx->pc = 0x3ad304u;
    // NOP
label_3ad308:
    // 0x3ad308: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ad308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ad30c:
    // 0x3ad30c: 0x0  nop
    ctx->pc = 0x3ad30cu;
    // NOP
label_3ad310:
    // 0x3ad310: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ad310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ad314:
    // 0x3ad314: 0x0  nop
    ctx->pc = 0x3ad314u;
    // NOP
label_3ad318:
    // 0x3ad318: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3ad318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ad31c:
    // 0x3ad31c: 0x0  nop
    ctx->pc = 0x3ad31cu;
    // NOP
    ctx->pc = 0x3ad320u;
}
