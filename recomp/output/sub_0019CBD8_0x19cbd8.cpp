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

// Function: sub_0019CBD8
// Address: 0x19cbd8 - 0x19cf28
void sub_0019CBD8_0x19cbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CBD8_0x19cbd8");
#endif

    switch (ctx->pc) {
        case 0x19cbd8u: goto label_19cbd8;
        case 0x19cbdcu: goto label_19cbdc;
        case 0x19cbe0u: goto label_19cbe0;
        case 0x19cbe4u: goto label_19cbe4;
        case 0x19cbe8u: goto label_19cbe8;
        case 0x19cbecu: goto label_19cbec;
        case 0x19cbf0u: goto label_19cbf0;
        case 0x19cbf4u: goto label_19cbf4;
        case 0x19cbf8u: goto label_19cbf8;
        case 0x19cbfcu: goto label_19cbfc;
        case 0x19cc00u: goto label_19cc00;
        case 0x19cc04u: goto label_19cc04;
        case 0x19cc08u: goto label_19cc08;
        case 0x19cc0cu: goto label_19cc0c;
        case 0x19cc10u: goto label_19cc10;
        case 0x19cc14u: goto label_19cc14;
        case 0x19cc18u: goto label_19cc18;
        case 0x19cc1cu: goto label_19cc1c;
        case 0x19cc20u: goto label_19cc20;
        case 0x19cc24u: goto label_19cc24;
        case 0x19cc28u: goto label_19cc28;
        case 0x19cc2cu: goto label_19cc2c;
        case 0x19cc30u: goto label_19cc30;
        case 0x19cc34u: goto label_19cc34;
        case 0x19cc38u: goto label_19cc38;
        case 0x19cc3cu: goto label_19cc3c;
        case 0x19cc40u: goto label_19cc40;
        case 0x19cc44u: goto label_19cc44;
        case 0x19cc48u: goto label_19cc48;
        case 0x19cc4cu: goto label_19cc4c;
        case 0x19cc50u: goto label_19cc50;
        case 0x19cc54u: goto label_19cc54;
        case 0x19cc58u: goto label_19cc58;
        case 0x19cc5cu: goto label_19cc5c;
        case 0x19cc60u: goto label_19cc60;
        case 0x19cc64u: goto label_19cc64;
        case 0x19cc68u: goto label_19cc68;
        case 0x19cc6cu: goto label_19cc6c;
        case 0x19cc70u: goto label_19cc70;
        case 0x19cc74u: goto label_19cc74;
        case 0x19cc78u: goto label_19cc78;
        case 0x19cc7cu: goto label_19cc7c;
        case 0x19cc80u: goto label_19cc80;
        case 0x19cc84u: goto label_19cc84;
        case 0x19cc88u: goto label_19cc88;
        case 0x19cc8cu: goto label_19cc8c;
        case 0x19cc90u: goto label_19cc90;
        case 0x19cc94u: goto label_19cc94;
        case 0x19cc98u: goto label_19cc98;
        case 0x19cc9cu: goto label_19cc9c;
        case 0x19cca0u: goto label_19cca0;
        case 0x19cca4u: goto label_19cca4;
        case 0x19cca8u: goto label_19cca8;
        case 0x19ccacu: goto label_19ccac;
        case 0x19ccb0u: goto label_19ccb0;
        case 0x19ccb4u: goto label_19ccb4;
        case 0x19ccb8u: goto label_19ccb8;
        case 0x19ccbcu: goto label_19ccbc;
        case 0x19ccc0u: goto label_19ccc0;
        case 0x19ccc4u: goto label_19ccc4;
        case 0x19ccc8u: goto label_19ccc8;
        case 0x19ccccu: goto label_19cccc;
        case 0x19ccd0u: goto label_19ccd0;
        case 0x19ccd4u: goto label_19ccd4;
        case 0x19ccd8u: goto label_19ccd8;
        case 0x19ccdcu: goto label_19ccdc;
        case 0x19cce0u: goto label_19cce0;
        case 0x19cce4u: goto label_19cce4;
        case 0x19cce8u: goto label_19cce8;
        case 0x19ccecu: goto label_19ccec;
        case 0x19ccf0u: goto label_19ccf0;
        case 0x19ccf4u: goto label_19ccf4;
        case 0x19ccf8u: goto label_19ccf8;
        case 0x19ccfcu: goto label_19ccfc;
        case 0x19cd00u: goto label_19cd00;
        case 0x19cd04u: goto label_19cd04;
        case 0x19cd08u: goto label_19cd08;
        case 0x19cd0cu: goto label_19cd0c;
        case 0x19cd10u: goto label_19cd10;
        case 0x19cd14u: goto label_19cd14;
        case 0x19cd18u: goto label_19cd18;
        case 0x19cd1cu: goto label_19cd1c;
        case 0x19cd20u: goto label_19cd20;
        case 0x19cd24u: goto label_19cd24;
        case 0x19cd28u: goto label_19cd28;
        case 0x19cd2cu: goto label_19cd2c;
        case 0x19cd30u: goto label_19cd30;
        case 0x19cd34u: goto label_19cd34;
        case 0x19cd38u: goto label_19cd38;
        case 0x19cd3cu: goto label_19cd3c;
        case 0x19cd40u: goto label_19cd40;
        case 0x19cd44u: goto label_19cd44;
        case 0x19cd48u: goto label_19cd48;
        case 0x19cd4cu: goto label_19cd4c;
        case 0x19cd50u: goto label_19cd50;
        case 0x19cd54u: goto label_19cd54;
        case 0x19cd58u: goto label_19cd58;
        case 0x19cd5cu: goto label_19cd5c;
        case 0x19cd60u: goto label_19cd60;
        case 0x19cd64u: goto label_19cd64;
        case 0x19cd68u: goto label_19cd68;
        case 0x19cd6cu: goto label_19cd6c;
        case 0x19cd70u: goto label_19cd70;
        case 0x19cd74u: goto label_19cd74;
        case 0x19cd78u: goto label_19cd78;
        case 0x19cd7cu: goto label_19cd7c;
        case 0x19cd80u: goto label_19cd80;
        case 0x19cd84u: goto label_19cd84;
        case 0x19cd88u: goto label_19cd88;
        case 0x19cd8cu: goto label_19cd8c;
        case 0x19cd90u: goto label_19cd90;
        case 0x19cd94u: goto label_19cd94;
        case 0x19cd98u: goto label_19cd98;
        case 0x19cd9cu: goto label_19cd9c;
        case 0x19cda0u: goto label_19cda0;
        case 0x19cda4u: goto label_19cda4;
        case 0x19cda8u: goto label_19cda8;
        case 0x19cdacu: goto label_19cdac;
        case 0x19cdb0u: goto label_19cdb0;
        case 0x19cdb4u: goto label_19cdb4;
        case 0x19cdb8u: goto label_19cdb8;
        case 0x19cdbcu: goto label_19cdbc;
        case 0x19cdc0u: goto label_19cdc0;
        case 0x19cdc4u: goto label_19cdc4;
        case 0x19cdc8u: goto label_19cdc8;
        case 0x19cdccu: goto label_19cdcc;
        case 0x19cdd0u: goto label_19cdd0;
        case 0x19cdd4u: goto label_19cdd4;
        case 0x19cdd8u: goto label_19cdd8;
        case 0x19cddcu: goto label_19cddc;
        case 0x19cde0u: goto label_19cde0;
        case 0x19cde4u: goto label_19cde4;
        case 0x19cde8u: goto label_19cde8;
        case 0x19cdecu: goto label_19cdec;
        case 0x19cdf0u: goto label_19cdf0;
        case 0x19cdf4u: goto label_19cdf4;
        case 0x19cdf8u: goto label_19cdf8;
        case 0x19cdfcu: goto label_19cdfc;
        case 0x19ce00u: goto label_19ce00;
        case 0x19ce04u: goto label_19ce04;
        case 0x19ce08u: goto label_19ce08;
        case 0x19ce0cu: goto label_19ce0c;
        case 0x19ce10u: goto label_19ce10;
        case 0x19ce14u: goto label_19ce14;
        case 0x19ce18u: goto label_19ce18;
        case 0x19ce1cu: goto label_19ce1c;
        case 0x19ce20u: goto label_19ce20;
        case 0x19ce24u: goto label_19ce24;
        case 0x19ce28u: goto label_19ce28;
        case 0x19ce2cu: goto label_19ce2c;
        case 0x19ce30u: goto label_19ce30;
        case 0x19ce34u: goto label_19ce34;
        case 0x19ce38u: goto label_19ce38;
        case 0x19ce3cu: goto label_19ce3c;
        case 0x19ce40u: goto label_19ce40;
        case 0x19ce44u: goto label_19ce44;
        case 0x19ce48u: goto label_19ce48;
        case 0x19ce4cu: goto label_19ce4c;
        case 0x19ce50u: goto label_19ce50;
        case 0x19ce54u: goto label_19ce54;
        case 0x19ce58u: goto label_19ce58;
        case 0x19ce5cu: goto label_19ce5c;
        case 0x19ce60u: goto label_19ce60;
        case 0x19ce64u: goto label_19ce64;
        case 0x19ce68u: goto label_19ce68;
        case 0x19ce6cu: goto label_19ce6c;
        case 0x19ce70u: goto label_19ce70;
        case 0x19ce74u: goto label_19ce74;
        case 0x19ce78u: goto label_19ce78;
        case 0x19ce7cu: goto label_19ce7c;
        case 0x19ce80u: goto label_19ce80;
        case 0x19ce84u: goto label_19ce84;
        case 0x19ce88u: goto label_19ce88;
        case 0x19ce8cu: goto label_19ce8c;
        case 0x19ce90u: goto label_19ce90;
        case 0x19ce94u: goto label_19ce94;
        case 0x19ce98u: goto label_19ce98;
        case 0x19ce9cu: goto label_19ce9c;
        case 0x19cea0u: goto label_19cea0;
        case 0x19cea4u: goto label_19cea4;
        case 0x19cea8u: goto label_19cea8;
        case 0x19ceacu: goto label_19ceac;
        case 0x19ceb0u: goto label_19ceb0;
        case 0x19ceb4u: goto label_19ceb4;
        case 0x19ceb8u: goto label_19ceb8;
        case 0x19cebcu: goto label_19cebc;
        case 0x19cec0u: goto label_19cec0;
        case 0x19cec4u: goto label_19cec4;
        case 0x19cec8u: goto label_19cec8;
        case 0x19ceccu: goto label_19cecc;
        case 0x19ced0u: goto label_19ced0;
        case 0x19ced4u: goto label_19ced4;
        case 0x19ced8u: goto label_19ced8;
        case 0x19cedcu: goto label_19cedc;
        case 0x19cee0u: goto label_19cee0;
        case 0x19cee4u: goto label_19cee4;
        case 0x19cee8u: goto label_19cee8;
        case 0x19ceecu: goto label_19ceec;
        case 0x19cef0u: goto label_19cef0;
        case 0x19cef4u: goto label_19cef4;
        case 0x19cef8u: goto label_19cef8;
        case 0x19cefcu: goto label_19cefc;
        case 0x19cf00u: goto label_19cf00;
        case 0x19cf04u: goto label_19cf04;
        case 0x19cf08u: goto label_19cf08;
        case 0x19cf0cu: goto label_19cf0c;
        case 0x19cf10u: goto label_19cf10;
        case 0x19cf14u: goto label_19cf14;
        case 0x19cf18u: goto label_19cf18;
        case 0x19cf1cu: goto label_19cf1c;
        case 0x19cf20u: goto label_19cf20;
        case 0x19cf24u: goto label_19cf24;
        default: break;
    }

    ctx->pc = 0x19cbd8u;

label_19cbd8:
    // 0x19cbd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19cbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19cbdc:
    // 0x19cbdc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_19cbe0:
    // 0x19cbe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cbe4:
    // 0x19cbe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19cbe8:
    // 0x19cbe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19cbec:
    // 0x19cbec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19cbf0:
    // 0x19cbf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19cbf4:
    // 0x19cbf4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19cbf8:
    // 0x19cbf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_19cbfc:
    // 0x19cbfc: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19cc00:
    // 0x19cc00: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19cc00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19cc04:
    // 0x19cc04: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19cc08:
    // 0x19cc08: 0xac620914  sw          $v0, 0x914($v1)
    ctx->pc = 0x19cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2324), GPR_U32(ctx, 2));
label_19cc0c:
    // 0x19cc0c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19cc10:
    // 0x19cc10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19cc14:
    // 0x19cc14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19cc18:
    // 0x19cc18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19cc1c:
    // 0x19cc1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19cc20:
    // 0x19cc20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19cc24:
    // 0x19cc24: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x19cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_19cc28:
    // 0x19cc28: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19cc2c:
    // 0x19cc2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19cc30:
    // 0x19cc30: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x19cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_19cc34:
    // 0x19cc34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19cc38:
    // 0x19cc38: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19cc3c:
    if (ctx->pc == 0x19CC3Cu) {
        ctx->pc = 0x19CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC38u;
        // 0x19cc3c: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC40u;
        goto label_19cc40;
    }
    ctx->pc = 0x19CC38u;
    {
        const bool branch_taken_0x19cc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cc38) {
            ctx->pc = 0x19CC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CC38u;
            // 0x19cc3c: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CC54u;
            goto label_19cc54;
        }
    }
    ctx->pc = 0x19CC40u;
label_19cc40:
    // 0x19cc40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19cc44:
    // 0x19cc44: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19cc48:
    // 0x19cc48: 0x40f809  jalr        $v0
label_19cc4c:
    if (ctx->pc == 0x19CC4Cu) {
        ctx->pc = 0x19CC50u;
        goto label_19cc50;
    }
    ctx->pc = 0x19CC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19CC50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC48u, 0x19CC50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CC50u;
label_19cc50:
    // 0x19cc50: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x19cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_19cc54:
    // 0x19cc54: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x19cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19cc58:
    // 0x19cc58: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x19cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_19cc5c:
    // 0x19cc5c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19cc60:
    // 0x19cc60: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x19cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_19cc64:
    // 0x19cc64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_19cc68:
    if (ctx->pc == 0x19CC68u) {
        ctx->pc = 0x19CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC64u;
        // 0x19cc68: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC6Cu;
        goto label_19cc6c;
    }
    ctx->pc = 0x19CC64u;
    {
        const bool branch_taken_0x19cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC64u;
        // 0x19cc68: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc64) {
            ctx->pc = 0x19CCA8u;
            goto label_19cca8;
        }
    }
    ctx->pc = 0x19CC6Cu;
label_19cc6c:
    // 0x19cc6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19cc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19cc70:
    // 0x19cc70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19cc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cc74:
    // 0x19cc74: 0xc60d00a8  lwc1        $f13, 0xA8($s0)
    ctx->pc = 0x19cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19cc78:
    // 0x19cc78: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19cc7c:
    // 0x19cc7c: 0xc60e00ac  lwc1        $f14, 0xAC($s0)
    ctx->pc = 0x19cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_19cc80:
    // 0x19cc80: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19cc80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19cc84:
    // 0x19cc84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19cc88:
    // 0x19cc88: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x19cc88u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_19cc8c:
    // 0x19cc8c: 0x46007381  sub.s       $f14, $f14, $f0
    ctx->pc = 0x19cc8cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
label_19cc90:
    // 0x19cc90: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19cc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_19cc94:
    // 0x19cc94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19cc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19cc98:
    // 0x19cc98: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x19cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_19cc9c:
    // 0x19cc9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cca0:
    // 0x19cca0: 0x60f809  jalr        $v1
label_19cca4:
    if (ctx->pc == 0x19CCA4u) {
        ctx->pc = 0x19CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCA0u;
        // 0x19cca4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCA8u;
        goto label_19cca8;
    }
    ctx->pc = 0x19CCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19CCA8u);
        ctx->pc = 0x19CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCA0u;
        // 0x19cca4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCA0u, 0x19CCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CCA8u;
label_19cca8:
    // 0x19cca8: 0xc061a1e  jal         func_186878
label_19ccac:
    if (ctx->pc == 0x19CCACu) {
        ctx->pc = 0x19CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCA8u;
        // 0x19ccac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCB0u;
        goto label_19ccb0;
    }
    ctx->pc = 0x19CCA8u;
    SET_GPR_U32(ctx, 31, 0x19CCB0u);
    ctx->pc = 0x19CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCA8u;
    // 0x19ccac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19CCA8u, 0x19CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCB0u;
label_19ccb0:
    // 0x19ccb0: 0xc06d97a  jal         func_1B65E8
label_19ccb4:
    if (ctx->pc == 0x19CCB4u) {
        ctx->pc = 0x19CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCB0u;
        // 0x19ccb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCB8u;
        goto label_19ccb8;
    }
    ctx->pc = 0x19CCB0u;
    SET_GPR_U32(ctx, 31, 0x19CCB8u);
    ctx->pc = 0x19CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCB0u;
    // 0x19ccb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B65E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B65E8u, 0x19CCB0u, 0x19CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCB8u;
label_19ccb8:
    // 0x19ccb8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19ccbc:
    // 0x19ccbc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_19ccc0:
    // 0x19ccc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19ccc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ccc4:
    // 0x19ccc4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x19ccc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19ccc8:
    // 0x19ccc8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19cccc:
    // 0x19cccc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19ccd0:
    if (ctx->pc == 0x19CCD0u) {
        ctx->pc = 0x19CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCCCu;
        // 0x19ccd0: 0x246408d4  addiu       $a0, $v1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CCD4u;
        goto label_19ccd4;
    }
    ctx->pc = 0x19CCCCu;
    {
        const bool branch_taken_0x19cccc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCCCu;
        // 0x19ccd0: 0x246408d4  addiu       $a0, $v1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cccc) {
            ctx->pc = 0x19CCE8u;
            goto label_19cce8;
        }
    }
    ctx->pc = 0x19CCD4u;
label_19ccd4:
    // 0x19ccd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ccd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ccd8:
    // 0x19ccd8: 0x0  nop
    ctx->pc = 0x19ccd8u;
    // NOP
label_19ccdc:
    // 0x19ccdc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ccdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19cce0:
    // 0x19cce0: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cce4:
    if (ctx->pc == 0x19CCE4u) {
        ctx->pc = 0x19CCE8u;
        goto label_19cce8;
    }
    ctx->pc = 0x19CCE0u;
    {
        const bool branch_taken_0x19cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cce0) {
            ctx->pc = 0x19CD04u;
            goto label_19cd04;
        }
    }
    ctx->pc = 0x19CCE8u;
label_19cce8:
    // 0x19cce8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19ccec:
    // 0x19ccec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ccecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ccf0:
    // 0x19ccf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19ccf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19ccf4:
    // 0x19ccf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ccf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ccf8:
    // 0x19ccf8: 0x0  nop
    ctx->pc = 0x19ccf8u;
    // NOP
label_19ccfc:
    // 0x19ccfc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ccfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19cd00:
    // 0x19cd00: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19cd00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19cd04:
    // 0x19cd04: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19cd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19cd08:
    // 0x19cd08: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19cd08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19cd0c:
    // 0x19cd0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19cd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd10:
    // 0x19cd10: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cd14:
    // 0x19cd14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19cd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19cd18:
    // 0x19cd18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cd1c:
    // 0x19cd1c: 0x0  nop
    ctx->pc = 0x19cd1cu;
    // NOP
label_19cd20:
    // 0x19cd20: 0x45000056  bc1f        . + 4 + (0x56 << 2)
label_19cd24:
    if (ctx->pc == 0x19CD24u) {
        ctx->pc = 0x19CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD20u;
        // 0x19cd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD28u;
        goto label_19cd28;
    }
    ctx->pc = 0x19CD20u;
    {
        const bool branch_taken_0x19cd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD20u;
        // 0x19cd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd20) {
            ctx->pc = 0x19CE7Cu;
            goto label_19ce7c;
        }
    }
    ctx->pc = 0x19CD28u;
label_19cd28:
    // 0x19cd28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cd2c:
    // 0x19cd2c: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x19cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_19cd30:
    // 0x19cd30: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x19cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
label_19cd34:
    // 0x19cd34: 0xc0f6da6  jal         func_3DB698
label_19cd38:
    if (ctx->pc == 0x19CD38u) {
        ctx->pc = 0x19CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD34u;
        // 0x19cd38: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD3Cu;
        goto label_19cd3c;
    }
    ctx->pc = 0x19CD34u;
    SET_GPR_U32(ctx, 31, 0x19CD3Cu);
    ctx->pc = 0x19CD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD34u;
    // 0x19cd38: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x19CD34u, 0x19CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD3Cu;
label_19cd3c:
    // 0x19cd3c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_19cd40:
    if (ctx->pc == 0x19CD40u) {
        ctx->pc = 0x19CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD3Cu;
        // 0x19cd40: 0x8e422b00  lw          $v0, 0x2B00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD44u;
        goto label_19cd44;
    }
    ctx->pc = 0x19CD3Cu;
    {
        const bool branch_taken_0x19cd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD3Cu;
        // 0x19cd40: 0x8e422b00  lw          $v0, 0x2B00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd3c) {
            ctx->pc = 0x19CE24u;
            goto label_19ce24;
        }
    }
    ctx->pc = 0x19CD44u;
label_19cd44:
    // 0x19cd44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cd48:
    // 0x19cd48: 0x8c440ff4  lw          $a0, 0xFF4($v0)
    ctx->pc = 0x19cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
label_19cd4c:
    // 0x19cd4c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x19cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_19cd50:
    // 0x19cd50: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x19cd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_19cd54:
    // 0x19cd54: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_19cd58:
    if (ctx->pc == 0x19CD58u) {
        ctx->pc = 0x19CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD54u;
        // 0x19cd58: 0x8e422b00  lw          $v0, 0x2B00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD5Cu;
        goto label_19cd5c;
    }
    ctx->pc = 0x19CD54u;
    {
        const bool branch_taken_0x19cd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD54u;
        // 0x19cd58: 0x8e422b00  lw          $v0, 0x2B00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd54) {
            ctx->pc = 0x19CDB8u;
            goto label_19cdb8;
        }
    }
    ctx->pc = 0x19CD5Cu;
label_19cd5c:
    // 0x19cd5c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19cd60:
    if (ctx->pc == 0x19CD60u) {
        ctx->pc = 0x19CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD5Cu;
        // 0x19cd60: 0x263108d4  addiu       $s1, $s1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD64u;
        goto label_19cd64;
    }
    ctx->pc = 0x19CD5Cu;
    {
        const bool branch_taken_0x19cd5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD5Cu;
        // 0x19cd60: 0x263108d4  addiu       $s1, $s1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd5c) {
            ctx->pc = 0x19CD78u;
            goto label_19cd78;
        }
    }
    ctx->pc = 0x19CD64u;
label_19cd64:
    // 0x19cd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd68:
    // 0x19cd68: 0x0  nop
    ctx->pc = 0x19cd68u;
    // NOP
label_19cd6c:
    // 0x19cd6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cd6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cd70:
    // 0x19cd70: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cd74:
    if (ctx->pc == 0x19CD74u) {
        ctx->pc = 0x19CD78u;
        goto label_19cd78;
    }
    ctx->pc = 0x19CD70u;
    {
        const bool branch_taken_0x19cd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd70) {
            ctx->pc = 0x19CD94u;
            goto label_19cd94;
        }
    }
    ctx->pc = 0x19CD78u;
label_19cd78:
    // 0x19cd78: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19cd7c:
    // 0x19cd7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cd80:
    // 0x19cd80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cd84:
    // 0x19cd84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cd88:
    // 0x19cd88: 0x0  nop
    ctx->pc = 0x19cd88u;
    // NOP
label_19cd8c:
    // 0x19cd8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cd8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cd90:
    // 0x19cd90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cd94:
    // 0x19cd94: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19cd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19cd98:
    // 0x19cd98: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19cd98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19cd9c:
    // 0x19cd9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19cd9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19cda0:
    // 0x19cda0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_19cda4:
    // 0x19cda4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19cda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19cda8:
    // 0x19cda8: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x19cda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
label_19cdac:
    // 0x19cdac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19cdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19cdb0:
    // 0x19cdb0: 0x10000017  b           . + 4 + (0x17 << 2)
label_19cdb4:
    if (ctx->pc == 0x19CDB4u) {
        ctx->pc = 0x19CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDB0u;
        // 0x19cdb4: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDB8u;
        goto label_19cdb8;
    }
    ctx->pc = 0x19CDB0u;
    {
        const bool branch_taken_0x19cdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDB0u;
        // 0x19cdb4: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdb0) {
            ctx->pc = 0x19CE10u;
            goto label_19ce10;
        }
    }
    ctx->pc = 0x19CDB8u;
label_19cdb8:
    // 0x19cdb8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19cdbc:
    if (ctx->pc == 0x19CDBCu) {
        ctx->pc = 0x19CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDB8u;
        // 0x19cdbc: 0x263108d4  addiu       $s1, $s1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDC0u;
        goto label_19cdc0;
    }
    ctx->pc = 0x19CDB8u;
    {
        const bool branch_taken_0x19cdb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDB8u;
        // 0x19cdbc: 0x263108d4  addiu       $s1, $s1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdb8) {
            ctx->pc = 0x19CDD4u;
            goto label_19cdd4;
        }
    }
    ctx->pc = 0x19CDC0u;
label_19cdc0:
    // 0x19cdc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cdc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cdc4:
    // 0x19cdc4: 0x0  nop
    ctx->pc = 0x19cdc4u;
    // NOP
label_19cdc8:
    // 0x19cdc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cdc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cdcc:
    // 0x19cdcc: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cdd0:
    if (ctx->pc == 0x19CDD0u) {
        ctx->pc = 0x19CDD4u;
        goto label_19cdd4;
    }
    ctx->pc = 0x19CDCCu;
    {
        const bool branch_taken_0x19cdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cdcc) {
            ctx->pc = 0x19CDF0u;
            goto label_19cdf0;
        }
    }
    ctx->pc = 0x19CDD4u;
label_19cdd4:
    // 0x19cdd4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19cdd8:
    // 0x19cdd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cddc:
    // 0x19cddc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cde0:
    // 0x19cde0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cde0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cde4:
    // 0x19cde4: 0x0  nop
    ctx->pc = 0x19cde4u;
    // NOP
label_19cde8:
    // 0x19cde8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cde8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cdec:
    // 0x19cdec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cdecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cdf0:
    // 0x19cdf0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19cdf4:
    // 0x19cdf4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19cdf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19cdf8:
    // 0x19cdf8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19cdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19cdfc:
    // 0x19cdfc: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x19cdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_19ce00:
    // 0x19ce00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19ce00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ce04:
    // 0x19ce04: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x19ce04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_19ce08:
    // 0x19ce08: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x19ce08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_19ce0c:
    // 0x19ce0c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19ce0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19ce10:
    // 0x19ce10: 0xc0b12b0  jal         func_2C4AC0
label_19ce14:
    if (ctx->pc == 0x19CE14u) {
        ctx->pc = 0x19CE18u;
        goto label_19ce18;
    }
    ctx->pc = 0x19CE10u;
    SET_GPR_U32(ctx, 31, 0x19CE18u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x19CE10u, 0x19CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE18u;
label_19ce18:
    // 0x19ce18: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x19ce18u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_19ce1c:
    // 0x19ce1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_19ce20:
    if (ctx->pc == 0x19CE20u) {
        ctx->pc = 0x19CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE1Cu;
        // 0x19ce20: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE24u;
        goto label_19ce24;
    }
    ctx->pc = 0x19CE1Cu;
    {
        const bool branch_taken_0x19ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE1Cu;
        // 0x19ce20: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce1c) {
            ctx->pc = 0x19CE7Cu;
            goto label_19ce7c;
        }
    }
    ctx->pc = 0x19CE24u;
label_19ce24:
    // 0x19ce24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19ce28:
    if (ctx->pc == 0x19CE28u) {
        ctx->pc = 0x19CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE24u;
        // 0x19ce28: 0x262408d4  addiu       $a0, $s1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE2Cu;
        goto label_19ce2c;
    }
    ctx->pc = 0x19CE24u;
    {
        const bool branch_taken_0x19ce24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE24u;
        // 0x19ce28: 0x262408d4  addiu       $a0, $s1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce24) {
            ctx->pc = 0x19CE40u;
            goto label_19ce40;
        }
    }
    ctx->pc = 0x19CE2Cu;
label_19ce2c:
    // 0x19ce2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ce2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ce30:
    // 0x19ce30: 0x0  nop
    ctx->pc = 0x19ce30u;
    // NOP
label_19ce34:
    // 0x19ce34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ce34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19ce38:
    // 0x19ce38: 0x10000008  b           . + 4 + (0x8 << 2)
label_19ce3c:
    if (ctx->pc == 0x19CE3Cu) {
        ctx->pc = 0x19CE40u;
        goto label_19ce40;
    }
    ctx->pc = 0x19CE38u;
    {
        const bool branch_taken_0x19ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce38) {
            ctx->pc = 0x19CE5Cu;
            goto label_19ce5c;
        }
    }
    ctx->pc = 0x19CE40u;
label_19ce40:
    // 0x19ce40: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19ce44:
    // 0x19ce44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ce48:
    // 0x19ce48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19ce4c:
    // 0x19ce4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ce4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ce50:
    // 0x19ce50: 0x0  nop
    ctx->pc = 0x19ce50u;
    // NOP
label_19ce54:
    // 0x19ce54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ce54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19ce58:
    // 0x19ce58: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19ce58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19ce5c:
    // 0x19ce5c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19ce5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19ce60:
    // 0x19ce60: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19ce60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19ce64:
    // 0x19ce64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ce64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ce68:
    // 0x19ce68: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19ce68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_19ce6c:
    // 0x19ce6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ce6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ce70:
    // 0x19ce70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19ce70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19ce74:
    // 0x19ce74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19ce74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19ce78:
    // 0x19ce78: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19ce7c:
    // 0x19ce7c: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x19ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
label_19ce80:
    // 0x19ce80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19ce84:
    if (ctx->pc == 0x19CE84u) {
        ctx->pc = 0x19CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE80u;
        // 0x19ce84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE88u;
        goto label_19ce88;
    }
    ctx->pc = 0x19CE80u;
    {
        const bool branch_taken_0x19ce80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE80u;
        // 0x19ce84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce80) {
            ctx->pc = 0x19CE9Cu;
            goto label_19ce9c;
        }
    }
    ctx->pc = 0x19CE88u;
label_19ce88:
    // 0x19ce88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ce88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ce8c:
    // 0x19ce8c: 0x0  nop
    ctx->pc = 0x19ce8cu;
    // NOP
label_19ce90:
    // 0x19ce90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19ce90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19ce94:
    // 0x19ce94: 0x10000007  b           . + 4 + (0x7 << 2)
label_19ce98:
    if (ctx->pc == 0x19CE98u) {
        ctx->pc = 0x19CE9Cu;
        goto label_19ce9c;
    }
    ctx->pc = 0x19CE94u;
    {
        const bool branch_taken_0x19ce94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce94) {
            ctx->pc = 0x19CEB4u;
            goto label_19ceb4;
        }
    }
    ctx->pc = 0x19CE9Cu;
label_19ce9c:
    // 0x19ce9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cea0:
    // 0x19cea0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cea4:
    // 0x19cea4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19cea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19cea8:
    // 0x19cea8: 0x0  nop
    ctx->pc = 0x19cea8u;
    // NOP
label_19ceac:
    // 0x19ceac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19ceacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19ceb0:
    // 0x19ceb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19ceb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19ceb4:
    // 0x19ceb4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19ceb8:
    // 0x19ceb8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19ceb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19cebc:
    // 0x19cebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19cebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cec0:
    // 0x19cec0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19cec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_19cec4:
    // 0x19cec4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19cec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19cec8:
    // 0x19cec8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19cec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19cecc:
    // 0x19cecc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x19ceccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_19ced0:
    // 0x19ced0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19ced0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19ced4:
    // 0x19ced4: 0xc0b12b0  jal         func_2C4AC0
label_19ced8:
    if (ctx->pc == 0x19CED8u) {
        ctx->pc = 0x19CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CED4u;
        // 0x19ced8: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEDCu;
        goto label_19cedc;
    }
    ctx->pc = 0x19CED4u;
    SET_GPR_U32(ctx, 31, 0x19CEDCu);
    ctx->pc = 0x19CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CED4u;
    // 0x19ced8: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x19CED4u, 0x19CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEDCu;
label_19cedc:
    // 0x19cedc: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
label_19cee0:
    // 0x19cee0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19cee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19cee4:
    // 0x19cee4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_19cee8:
    // 0x19cee8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19cee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19ceec:
    // 0x19ceec: 0xc0b12b0  jal         func_2C4AC0
label_19cef0:
    if (ctx->pc == 0x19CEF0u) {
        ctx->pc = 0x19CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEECu;
        // 0x19cef0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEF4u;
        goto label_19cef4;
    }
    ctx->pc = 0x19CEECu;
    SET_GPR_U32(ctx, 31, 0x19CEF4u);
    ctx->pc = 0x19CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CEECu;
    // 0x19cef0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x19CEECu, 0x19CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEF4u;
label_19cef4:
    // 0x19cef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cef8:
    // 0x19cef8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19cef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19cefc:
    // 0x19cefc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x19cefcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_19cf00:
    // 0x19cf00: 0xc067412  jal         func_19D048
label_19cf04:
    if (ctx->pc == 0x19CF04u) {
        ctx->pc = 0x19CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF00u;
        // 0x19cf04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF08u;
        goto label_19cf08;
    }
    ctx->pc = 0x19CF00u;
    SET_GPR_U32(ctx, 31, 0x19CF08u);
    ctx->pc = 0x19CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF00u;
    // 0x19cf04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D048u, 0x19CF00u, 0x19CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF08u;
label_19cf08:
    // 0x19cf08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cf08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19cf0c:
    // 0x19cf0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19cf0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19cf10:
    // 0x19cf10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19cf10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19cf14:
    // 0x19cf14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19cf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19cf18:
    // 0x19cf18: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19cf1c:
    // 0x19cf1c: 0x3e00008  jr          $ra
label_19cf20:
    if (ctx->pc == 0x19CF20u) {
        ctx->pc = 0x19CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF1Cu;
        // 0x19cf20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF24u;
        goto label_19cf24;
    }
    ctx->pc = 0x19CF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF1Cu;
        // 0x19cf20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CF24u;
label_19cf24:
    // 0x19cf24: 0x0  nop
    ctx->pc = 0x19cf24u;
    // NOP
    ctx->pc = 0x19cf28u;
}
