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

// Function: sub_00283F98
// Address: 0x283f98 - 0x284f98
void sub_00283F98_0x283f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283F98_0x283f98");
#endif

    switch (ctx->pc) {
        case 0x283fd8u: goto label_283fd8;
        case 0x283fe4u: goto label_283fe4;
        case 0x284010u: goto label_284010;
        case 0x284034u: goto label_284034;
        case 0x28403cu: goto label_28403c;
        case 0x284058u: goto label_284058;
        case 0x28407cu: goto label_28407c;
        case 0x284084u: goto label_284084;
        case 0x2840acu: goto label_2840ac;
        case 0x2840d0u: goto label_2840d0;
        case 0x2840d8u: goto label_2840d8;
        case 0x284100u: goto label_284100;
        case 0x284120u: goto label_284120;
        case 0x284128u: goto label_284128;
        case 0x284150u: goto label_284150;
        case 0x284170u: goto label_284170;
        case 0x284178u: goto label_284178;
        case 0x2841a0u: goto label_2841a0;
        case 0x2841c0u: goto label_2841c0;
        case 0x2841c8u: goto label_2841c8;
        case 0x2841f0u: goto label_2841f0;
        case 0x284218u: goto label_284218;
        case 0x284220u: goto label_284220;
        case 0x284230u: goto label_284230;
        case 0x284238u: goto label_284238;
        case 0x284248u: goto label_284248;
        case 0x284250u: goto label_284250;
        case 0x284268u: goto label_284268;
        case 0x284294u: goto label_284294;
        case 0x2842b4u: goto label_2842b4;
        case 0x2842bcu: goto label_2842bc;
        case 0x2842e4u: goto label_2842e4;
        case 0x284304u: goto label_284304;
        case 0x28430cu: goto label_28430c;
        case 0x28433cu: goto label_28433c;
        case 0x28435cu: goto label_28435c;
        case 0x284364u: goto label_284364;
        case 0x28438cu: goto label_28438c;
        case 0x2843b8u: goto label_2843b8;
        case 0x2843dcu: goto label_2843dc;
        case 0x2843e4u: goto label_2843e4;
        case 0x2843f0u: goto label_2843f0;
        case 0x284414u: goto label_284414;
        case 0x284430u: goto label_284430;
        case 0x284450u: goto label_284450;
        case 0x284458u: goto label_284458;
        case 0x284474u: goto label_284474;
        case 0x284494u: goto label_284494;
        case 0x28449cu: goto label_28449c;
        case 0x2844b0u: goto label_2844b0;
        case 0x2844ccu: goto label_2844cc;
        case 0x2844d4u: goto label_2844d4;
        case 0x2844e8u: goto label_2844e8;
        case 0x2844f0u: goto label_2844f0;
        case 0x284520u: goto label_284520;
        case 0x28453cu: goto label_28453c;
        case 0x284544u: goto label_284544;
        case 0x284560u: goto label_284560;
        case 0x28457cu: goto label_28457c;
        case 0x284584u: goto label_284584;
        case 0x2845a0u: goto label_2845a0;
        case 0x2845bcu: goto label_2845bc;
        case 0x2845c4u: goto label_2845c4;
        case 0x2845e0u: goto label_2845e0;
        case 0x2845fcu: goto label_2845fc;
        case 0x284604u: goto label_284604;
        case 0x284620u: goto label_284620;
        case 0x28463cu: goto label_28463c;
        case 0x284644u: goto label_284644;
        case 0x284660u: goto label_284660;
        case 0x28467cu: goto label_28467c;
        case 0x284684u: goto label_284684;
        case 0x2846a0u: goto label_2846a0;
        case 0x2846bcu: goto label_2846bc;
        case 0x2846c4u: goto label_2846c4;
        case 0x2846d4u: goto label_2846d4;
        case 0x2846dcu: goto label_2846dc;
        case 0x2846ecu: goto label_2846ec;
        case 0x2846f4u: goto label_2846f4;
        case 0x284708u: goto label_284708;
        case 0x284720u: goto label_284720;
        case 0x28473cu: goto label_28473c;
        case 0x284744u: goto label_284744;
        case 0x284754u: goto label_284754;
        case 0x28475cu: goto label_28475c;
        case 0x28476cu: goto label_28476c;
        case 0x284774u: goto label_284774;
        case 0x284784u: goto label_284784;
        case 0x28478cu: goto label_28478c;
        case 0x2847a4u: goto label_2847a4;
        case 0x2847bcu: goto label_2847bc;
        case 0x2847d8u: goto label_2847d8;
        case 0x2847e0u: goto label_2847e0;
        case 0x2847fcu: goto label_2847fc;
        case 0x284818u: goto label_284818;
        case 0x284820u: goto label_284820;
        case 0x28483cu: goto label_28483c;
        case 0x28485cu: goto label_28485c;
        case 0x284864u: goto label_284864;
        case 0x284874u: goto label_284874;
        case 0x28487cu: goto label_28487c;
        case 0x28488cu: goto label_28488c;
        case 0x284894u: goto label_284894;
        case 0x2848a4u: goto label_2848a4;
        case 0x2848acu: goto label_2848ac;
        case 0x2848b4u: goto label_2848b4;
        case 0x2848c8u: goto label_2848c8;
        case 0x2848dcu: goto label_2848dc;
        case 0x2848fcu: goto label_2848fc;
        case 0x284904u: goto label_284904;
        case 0x284914u: goto label_284914;
        case 0x28491cu: goto label_28491c;
        case 0x28492cu: goto label_28492c;
        case 0x284934u: goto label_284934;
        case 0x284944u: goto label_284944;
        case 0x28494cu: goto label_28494c;
        case 0x284954u: goto label_284954;
        case 0x284968u: goto label_284968;
        case 0x28497cu: goto label_28497c;
        case 0x28499cu: goto label_28499c;
        case 0x2849a4u: goto label_2849a4;
        case 0x2849b4u: goto label_2849b4;
        case 0x2849bcu: goto label_2849bc;
        case 0x2849ccu: goto label_2849cc;
        case 0x2849d4u: goto label_2849d4;
        case 0x2849e4u: goto label_2849e4;
        case 0x2849ecu: goto label_2849ec;
        case 0x2849f4u: goto label_2849f4;
        case 0x284a08u: goto label_284a08;
        case 0x284a1cu: goto label_284a1c;
        case 0x284a3cu: goto label_284a3c;
        case 0x284a44u: goto label_284a44;
        case 0x284a54u: goto label_284a54;
        case 0x284a5cu: goto label_284a5c;
        case 0x284a6cu: goto label_284a6c;
        case 0x284a74u: goto label_284a74;
        case 0x284a84u: goto label_284a84;
        case 0x284a8cu: goto label_284a8c;
        case 0x284a94u: goto label_284a94;
        case 0x284aa8u: goto label_284aa8;
        case 0x284abcu: goto label_284abc;
        case 0x284ad4u: goto label_284ad4;
        case 0x284adcu: goto label_284adc;
        case 0x284ae8u: goto label_284ae8;
        case 0x284b00u: goto label_284b00;
        case 0x284b1cu: goto label_284b1c;
        case 0x284b24u: goto label_284b24;
        case 0x284b34u: goto label_284b34;
        case 0x284b3cu: goto label_284b3c;
        case 0x284b4cu: goto label_284b4c;
        case 0x284b54u: goto label_284b54;
        case 0x284b68u: goto label_284b68;
        case 0x284b80u: goto label_284b80;
        case 0x284b9cu: goto label_284b9c;
        case 0x284ba4u: goto label_284ba4;
        case 0x284bb4u: goto label_284bb4;
        case 0x284bbcu: goto label_284bbc;
        case 0x284bccu: goto label_284bcc;
        case 0x284bd4u: goto label_284bd4;
        case 0x284be4u: goto label_284be4;
        case 0x284becu: goto label_284bec;
        case 0x284c04u: goto label_284c04;
        case 0x284c1cu: goto label_284c1c;
        case 0x284c3cu: goto label_284c3c;
        case 0x284c44u: goto label_284c44;
        case 0x284c54u: goto label_284c54;
        case 0x284c5cu: goto label_284c5c;
        case 0x284c6cu: goto label_284c6c;
        case 0x284c74u: goto label_284c74;
        case 0x284c84u: goto label_284c84;
        case 0x284c8cu: goto label_284c8c;
        case 0x284cacu: goto label_284cac;
        case 0x284cc0u: goto label_284cc0;
        case 0x284ce0u: goto label_284ce0;
        case 0x284ce8u: goto label_284ce8;
        case 0x284cf8u: goto label_284cf8;
        case 0x284d00u: goto label_284d00;
        case 0x284d10u: goto label_284d10;
        case 0x284d18u: goto label_284d18;
        case 0x284d28u: goto label_284d28;
        case 0x284d30u: goto label_284d30;
        case 0x284d50u: goto label_284d50;
        case 0x284d64u: goto label_284d64;
        case 0x284d84u: goto label_284d84;
        case 0x284d8cu: goto label_284d8c;
        case 0x284d9cu: goto label_284d9c;
        case 0x284da4u: goto label_284da4;
        case 0x284db4u: goto label_284db4;
        case 0x284dbcu: goto label_284dbc;
        case 0x284dccu: goto label_284dcc;
        case 0x284dd4u: goto label_284dd4;
        case 0x284df4u: goto label_284df4;
        case 0x284e08u: goto label_284e08;
        case 0x284e28u: goto label_284e28;
        case 0x284e30u: goto label_284e30;
        case 0x284e40u: goto label_284e40;
        case 0x284e48u: goto label_284e48;
        case 0x284e58u: goto label_284e58;
        case 0x284e60u: goto label_284e60;
        case 0x284e70u: goto label_284e70;
        case 0x284e78u: goto label_284e78;
        case 0x284e98u: goto label_284e98;
        case 0x284eacu: goto label_284eac;
        case 0x284ec8u: goto label_284ec8;
        case 0x284ed0u: goto label_284ed0;
        case 0x284ee0u: goto label_284ee0;
        case 0x284ee8u: goto label_284ee8;
        case 0x284ef8u: goto label_284ef8;
        case 0x284f00u: goto label_284f00;
        case 0x284f10u: goto label_284f10;
        case 0x284f18u: goto label_284f18;
        case 0x284f38u: goto label_284f38;
        case 0x284f4cu: goto label_284f4c;
        case 0x284f54u: goto label_284f54;
        case 0x284f60u: goto label_284f60;
        default: break;
    }

    ctx->pc = 0x283f98u;

    // 0x283f98: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x283f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x283f9c: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x283f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x283fa0: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x283fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x283fa4: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x283fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x283fa8: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x283fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x283fac: 0x3c130047  lui         $s3, 0x47
    ctx->pc = 0x283facu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
    // 0x283fb0: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x283fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x283fb4: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x283fb4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x283fb8: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x283fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x283fbc: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x283fbcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x283fc0: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x283fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x283fc4: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x283fc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x283fc8: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x283fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x283fcc: 0x100003da  b           . + 4 + (0x3DA << 2)
    ctx->pc = 0x283FCCu;
    {
        const bool branch_taken_0x283fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FCCu;
        // 0x283fd0: 0xffbf0238  sd          $ra, 0x238($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fcc) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x283FD4u;
    // 0x283fd4: 0x0  nop
    ctx->pc = 0x283fd4u;
    // NOP
label_283fd8:
    // 0x283fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fdc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x283FDCu;
    SET_GPR_U32(ctx, 31, 0x283FE4u);
    ctx->pc = 0x283FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283FDCu;
    // 0x283fe0: 0x24a5a5a8  addiu       $a1, $a1, -0x5A58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x283FDCu, 0x283FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FE4u;
label_283fe4:
    // 0x283fe4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x283FE4u;
    {
        const bool branch_taken_0x283fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283fe4) {
            ctx->pc = 0x283FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283FE4u;
            // 0x283fe8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284004u;
            goto label_284004;
        }
    }
    ctx->pc = 0x283FECu;
    // 0x283fec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x283fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x283ff0: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x283ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x283ff4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x283ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x283ff8: 0x24a59f80  addiu       $a1, $a1, -0x6080
    ctx->pc = 0x283ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    // 0x283ffc: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x283FFCu;
    {
        const bool branch_taken_0x283ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FFCu;
        // 0x284000: 0x24c6bf68  addiu       $a2, $a2, -0x4098 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ffc) {
            ctx->pc = 0x28448Cu;
            goto label_28448c;
        }
    }
    ctx->pc = 0x284004u;
label_284004:
    // 0x284004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284008: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284008u;
    SET_GPR_U32(ctx, 31, 0x284010u);
    ctx->pc = 0x28400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284008u;
    // 0x28400c: 0x24a5a5c0  addiu       $a1, $a1, -0x5A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284008u, 0x284010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284010u;
label_284010:
    // 0x284010: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x284010u;
    {
        const bool branch_taken_0x284010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284010) {
            ctx->pc = 0x284014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284010u;
            // 0x284014: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28404Cu;
            goto label_28404c;
        }
    }
    ctx->pc = 0x284018u;
    // 0x284018: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x284018u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x28401c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x28401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284020: 0x2610bf68  addiu       $s0, $s0, -0x4098
    ctx->pc = 0x284020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950760));
    // 0x284024: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284028: 0x24a59f80  addiu       $a1, $a1, -0x6080
    ctx->pc = 0x284028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    // 0x28402c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x28402Cu;
    SET_GPR_U32(ctx, 31, 0x284034u);
    ctx->pc = 0x284030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28402Cu;
    // 0x284030: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x28402Cu, 0x284034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284034u;
label_284034:
    // 0x284034: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284034u;
    SET_GPR_U32(ctx, 31, 0x28403Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284034u, 0x28403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28403Cu;
label_28403c:
    // 0x28403c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284040: 0xae00fff8  sw          $zero, -0x8($s0)
    ctx->pc = 0x284040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
    // 0x284044: 0x100003bc  b           . + 4 + (0x3BC << 2)
    ctx->pc = 0x284044u;
    {
        const bool branch_taken_0x284044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284044u;
        // 0x284048: 0xae02fffc  sw          $v0, -0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284044) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x28404Cu;
label_28404c:
    // 0x28404c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284050: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284050u;
    SET_GPR_U32(ctx, 31, 0x284058u);
    ctx->pc = 0x284054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284050u;
    // 0x284054: 0x24a5a5d8  addiu       $a1, $a1, -0x5A28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284050u, 0x284058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284058u;
label_284058:
    // 0x284058: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x284058u;
    {
        const bool branch_taken_0x284058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284058) {
            ctx->pc = 0x28405Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284058u;
            // 0x28405c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840A0u;
            goto label_2840a0;
        }
    }
    ctx->pc = 0x284060u;
    // 0x284060: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x284060u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x284064: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284068: 0x2610bf6c  addiu       $s0, $s0, -0x4094
    ctx->pc = 0x284068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950764));
    // 0x28406c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28406cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284070: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x284070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284074: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284074u;
    SET_GPR_U32(ctx, 31, 0x28407Cu);
    ctx->pc = 0x284078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284074u;
    // 0x284078: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284074u, 0x28407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28407Cu;
label_28407c:
    // 0x28407c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28407Cu;
    SET_GPR_U32(ctx, 31, 0x284084u);
    ctx->pc = 0x284080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28407Cu;
    // 0x284080: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28407Cu, 0x284084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284084u;
label_284084:
    // 0x284084: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x284084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x284088: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284088u;
    {
        const bool branch_taken_0x284088 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284088u;
        // 0x28408c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284088) {
            ctx->pc = 0x284098u;
            goto label_284098;
        }
    }
    ctx->pc = 0x284090u;
    // 0x284090: 0x100003a9  b           . + 4 + (0x3A9 << 2)
    ctx->pc = 0x284090u;
    {
        const bool branch_taken_0x284090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284090u;
        // 0x284094: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284090) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284098u;
label_284098:
    // 0x284098: 0x100003a7  b           . + 4 + (0x3A7 << 2)
    ctx->pc = 0x284098u;
    {
        const bool branch_taken_0x284098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284098u;
        // 0x28409c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284098) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2840A0u;
label_2840a0:
    // 0x2840a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2840a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840a4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2840A4u;
    SET_GPR_U32(ctx, 31, 0x2840ACu);
    ctx->pc = 0x2840A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840A4u;
    // 0x2840a8: 0x24a5a5f8  addiu       $a1, $a1, -0x5A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2840A4u, 0x2840ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840ACu;
label_2840ac:
    // 0x2840ac: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2840ACu;
    {
        const bool branch_taken_0x2840ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2840ac) {
            ctx->pc = 0x2840B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2840ACu;
            // 0x2840b0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840F4u;
            goto label_2840f4;
        }
    }
    ctx->pc = 0x2840B4u;
    // 0x2840b4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x2840b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x2840b8: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2840b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2840bc: 0x2610bf70  addiu       $s0, $s0, -0x4090
    ctx->pc = 0x2840bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950768));
    // 0x2840c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2840c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2840c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2840c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840c8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2840C8u;
    SET_GPR_U32(ctx, 31, 0x2840D0u);
    ctx->pc = 0x2840CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840C8u;
    // 0x2840cc: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2840C8u, 0x2840D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840D0u;
label_2840d0:
    // 0x2840d0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2840D0u;
    SET_GPR_U32(ctx, 31, 0x2840D8u);
    ctx->pc = 0x2840D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840D0u;
    // 0x2840d4: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2840D0u, 0x2840D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840D8u;
label_2840d8:
    // 0x2840d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2840d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2840dc: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2840DCu;
    {
        const bool branch_taken_0x2840dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2840E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840DCu;
        // 0x2840e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840dc) {
            ctx->pc = 0x2840ECu;
            goto label_2840ec;
        }
    }
    ctx->pc = 0x2840E4u;
    // 0x2840e4: 0x10000394  b           . + 4 + (0x394 << 2)
    ctx->pc = 0x2840E4u;
    {
        const bool branch_taken_0x2840e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840E4u;
        // 0x2840e8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840e4) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2840ECu;
label_2840ec:
    // 0x2840ec: 0x10000392  b           . + 4 + (0x392 << 2)
    ctx->pc = 0x2840ECu;
    {
        const bool branch_taken_0x2840ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840ECu;
        // 0x2840f0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840ec) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2840F4u;
label_2840f4:
    // 0x2840f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2840f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840f8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2840F8u;
    SET_GPR_U32(ctx, 31, 0x284100u);
    ctx->pc = 0x2840FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840F8u;
    // 0x2840fc: 0x24a5a610  addiu       $a1, $a1, -0x59F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2840F8u, 0x284100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284100u;
label_284100:
    // 0x284100: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x284100u;
    {
        const bool branch_taken_0x284100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284100) {
            ctx->pc = 0x284104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284100u;
            // 0x284104: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284144u;
            goto label_284144;
        }
    }
    ctx->pc = 0x284108u;
    // 0x284108: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x284108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x28410c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x28410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284110: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284114: 0x26062bd4  addiu       $a2, $s0, 0x2BD4
    ctx->pc = 0x284114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11220));
    // 0x284118: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284118u;
    SET_GPR_U32(ctx, 31, 0x284120u);
    ctx->pc = 0x28411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284118u;
    // 0x28411c: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284118u, 0x284120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284120u;
label_284120:
    // 0x284120: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284120u;
    SET_GPR_U32(ctx, 31, 0x284128u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284120u, 0x284128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284128u;
label_284128:
    // 0x284128: 0x8e022bd4  lw          $v0, 0x2BD4($s0)
    ctx->pc = 0x284128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11220)));
    // 0x28412c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28412Cu;
    {
        const bool branch_taken_0x28412c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x284130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28412Cu;
        // 0x284130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28412c) {
            ctx->pc = 0x28413Cu;
            goto label_28413c;
        }
    }
    ctx->pc = 0x284134u;
    // 0x284134: 0x10000380  b           . + 4 + (0x380 << 2)
    ctx->pc = 0x284134u;
    {
        const bool branch_taken_0x284134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284134u;
        // 0x284138: 0xae002bd4  sw          $zero, 0x2BD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284134) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x28413Cu;
label_28413c:
    // 0x28413c: 0x1000037e  b           . + 4 + (0x37E << 2)
    ctx->pc = 0x28413Cu;
    {
        const bool branch_taken_0x28413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28413Cu;
        // 0x284140: 0xae022bd4  sw          $v0, 0x2BD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28413c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284144u;
label_284144:
    // 0x284144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284148: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284148u;
    SET_GPR_U32(ctx, 31, 0x284150u);
    ctx->pc = 0x28414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284148u;
    // 0x28414c: 0x24a5a618  addiu       $a1, $a1, -0x59E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284148u, 0x284150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284150u;
label_284150:
    // 0x284150: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x284150u;
    {
        const bool branch_taken_0x284150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284150) {
            ctx->pc = 0x284154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284150u;
            // 0x284154: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284194u;
            goto label_284194;
        }
    }
    ctx->pc = 0x284158u;
    // 0x284158: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x284158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x28415c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x28415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284160: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284164: 0x26062be8  addiu       $a2, $s0, 0x2BE8
    ctx->pc = 0x284164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11240));
    // 0x284168: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284168u;
    SET_GPR_U32(ctx, 31, 0x284170u);
    ctx->pc = 0x28416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284168u;
    // 0x28416c: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284168u, 0x284170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284170u;
label_284170:
    // 0x284170: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284170u;
    SET_GPR_U32(ctx, 31, 0x284178u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284170u, 0x284178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284178u;
label_284178:
    // 0x284178: 0x8e022be8  lw          $v0, 0x2BE8($s0)
    ctx->pc = 0x284178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11240)));
    // 0x28417c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28417Cu;
    {
        const bool branch_taken_0x28417c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x284180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28417Cu;
        // 0x284180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28417c) {
            ctx->pc = 0x28418Cu;
            goto label_28418c;
        }
    }
    ctx->pc = 0x284184u;
    // 0x284184: 0x1000036c  b           . + 4 + (0x36C << 2)
    ctx->pc = 0x284184u;
    {
        const bool branch_taken_0x284184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284184u;
        // 0x284188: 0xae002be8  sw          $zero, 0x2BE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284184) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x28418Cu;
label_28418c:
    // 0x28418c: 0x1000036a  b           . + 4 + (0x36A << 2)
    ctx->pc = 0x28418Cu;
    {
        const bool branch_taken_0x28418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28418Cu;
        // 0x284190: 0xae022be8  sw          $v0, 0x2BE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28418c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284194u;
label_284194:
    // 0x284194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284198: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284198u;
    SET_GPR_U32(ctx, 31, 0x2841A0u);
    ctx->pc = 0x28419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284198u;
    // 0x28419c: 0x24a5a628  addiu       $a1, $a1, -0x59D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284198u, 0x2841A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841A0u;
label_2841a0:
    // 0x2841a0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2841A0u;
    {
        const bool branch_taken_0x2841a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2841a0) {
            ctx->pc = 0x2841A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2841A0u;
            // 0x2841a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2841E4u;
            goto label_2841e4;
        }
    }
    ctx->pc = 0x2841A8u;
    // 0x2841a8: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2841a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2841ac: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2841acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2841b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2841b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2841b4: 0x26062bec  addiu       $a2, $s0, 0x2BEC
    ctx->pc = 0x2841b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11244));
    // 0x2841b8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2841B8u;
    SET_GPR_U32(ctx, 31, 0x2841C0u);
    ctx->pc = 0x2841BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841B8u;
    // 0x2841bc: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2841B8u, 0x2841C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841C0u;
label_2841c0:
    // 0x2841c0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2841C0u;
    SET_GPR_U32(ctx, 31, 0x2841C8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2841C0u, 0x2841C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841C8u;
label_2841c8:
    // 0x2841c8: 0x8e022bec  lw          $v0, 0x2BEC($s0)
    ctx->pc = 0x2841c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11244)));
    // 0x2841cc: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2841CCu;
    {
        const bool branch_taken_0x2841cc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2841D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841CCu;
        // 0x2841d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841cc) {
            ctx->pc = 0x2841DCu;
            goto label_2841dc;
        }
    }
    ctx->pc = 0x2841D4u;
    // 0x2841d4: 0x10000358  b           . + 4 + (0x358 << 2)
    ctx->pc = 0x2841D4u;
    {
        const bool branch_taken_0x2841d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841D4u;
        // 0x2841d8: 0xae002bec  sw          $zero, 0x2BEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841d4) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2841DCu;
label_2841dc:
    // 0x2841dc: 0x10000356  b           . + 4 + (0x356 << 2)
    ctx->pc = 0x2841DCu;
    {
        const bool branch_taken_0x2841dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841DCu;
        // 0x2841e0: 0xae022bec  sw          $v0, 0x2BEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841dc) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2841E4u;
label_2841e4:
    // 0x2841e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2841e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841e8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2841E8u;
    SET_GPR_U32(ctx, 31, 0x2841F0u);
    ctx->pc = 0x2841ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841E8u;
    // 0x2841ec: 0x24a5a640  addiu       $a1, $a1, -0x59C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2841E8u, 0x2841F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841F0u;
label_2841f0:
    // 0x2841f0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2841F0u;
    {
        const bool branch_taken_0x2841f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2841f0) {
            ctx->pc = 0x2841F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2841F0u;
            // 0x2841f4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28425Cu;
            goto label_28425c;
        }
    }
    ctx->pc = 0x2841F8u;
    // 0x2841f8: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2841f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2841fc: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x2841fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x284200: 0x2631c5f4  addiu       $s1, $s1, -0x3A0C
    ctx->pc = 0x284200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952436));
    // 0x284204: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284208: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28420c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28420cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284210: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284210u;
    SET_GPR_U32(ctx, 31, 0x284218u);
    ctx->pc = 0x284214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284210u;
    // 0x284214: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284210u, 0x284218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284218u;
label_284218:
    // 0x284218: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284218u;
    SET_GPR_U32(ctx, 31, 0x284220u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284218u, 0x284220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284220u;
label_284220:
    // 0x284220: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284228: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284228u;
    SET_GPR_U32(ctx, 31, 0x284230u);
    ctx->pc = 0x28422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284228u;
    // 0x28422c: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284228u, 0x284230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284230u;
label_284230:
    // 0x284230: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284230u;
    SET_GPR_U32(ctx, 31, 0x284238u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284230u, 0x284238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284238u;
label_284238:
    // 0x284238: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28423c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284240: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284240u;
    SET_GPR_U32(ctx, 31, 0x284248u);
    ctx->pc = 0x284244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284240u;
    // 0x284244: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284240u, 0x284248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284248u;
label_284248:
    // 0x284248: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284248u;
    SET_GPR_U32(ctx, 31, 0x284250u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284248u, 0x284250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284250u;
label_284250:
    // 0x284250: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x284250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x284254: 0x10000338  b           . + 4 + (0x338 << 2)
    ctx->pc = 0x284254u;
    {
        const bool branch_taken_0x284254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284254u;
        // 0x284258: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284254) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x28425Cu;
label_28425c:
    // 0x28425c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284260: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284260u;
    SET_GPR_U32(ctx, 31, 0x284268u);
    ctx->pc = 0x284264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284260u;
    // 0x284264: 0x24a5a660  addiu       $a1, $a1, -0x59A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284260u, 0x284268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284268u;
label_284268:
    // 0x284268: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x284268u;
    {
        const bool branch_taken_0x284268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284268) {
            ctx->pc = 0x28426Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284268u;
            // 0x28426c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284288u;
            goto label_284288;
        }
    }
    ctx->pc = 0x284270u;
    // 0x284270: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284274: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x284274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x284278: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28427c: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x28427cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x284280: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x284280u;
    {
        const bool branch_taken_0x284280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284280u;
        // 0x284284: 0x24c6a7c4  addiu       $a2, $a2, -0x583C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284280) {
            ctx->pc = 0x28448Cu;
            goto label_28448c;
        }
    }
    ctx->pc = 0x284288u;
label_284288:
    // 0x284288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28428c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x28428Cu;
    SET_GPR_U32(ctx, 31, 0x284294u);
    ctx->pc = 0x284290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28428Cu;
    // 0x284290: 0x24a5a688  addiu       $a1, $a1, -0x5978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x28428Cu, 0x284294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284294u;
label_284294:
    // 0x284294: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x284294u;
    {
        const bool branch_taken_0x284294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284294) {
            ctx->pc = 0x284298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284294u;
            // 0x284298: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2842D8u;
            goto label_2842d8;
        }
    }
    ctx->pc = 0x28429Cu;
    // 0x28429c: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x28429cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2842a0: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2842a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2842a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2842a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2842a8: 0x26062bbc  addiu       $a2, $s0, 0x2BBC
    ctx->pc = 0x2842a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11196));
    // 0x2842ac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2842ACu;
    SET_GPR_U32(ctx, 31, 0x2842B4u);
    ctx->pc = 0x2842B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842ACu;
    // 0x2842b0: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2842ACu, 0x2842B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842B4u;
label_2842b4:
    // 0x2842b4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2842B4u;
    SET_GPR_U32(ctx, 31, 0x2842BCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2842B4u, 0x2842BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842BCu;
label_2842bc:
    // 0x2842bc: 0x8e022bbc  lw          $v0, 0x2BBC($s0)
    ctx->pc = 0x2842bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11196)));
    // 0x2842c0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2842C0u;
    {
        const bool branch_taken_0x2842c0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2842C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842C0u;
        // 0x2842c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842c0) {
            ctx->pc = 0x2842D0u;
            goto label_2842d0;
        }
    }
    ctx->pc = 0x2842C8u;
    // 0x2842c8: 0x1000031b  b           . + 4 + (0x31B << 2)
    ctx->pc = 0x2842C8u;
    {
        const bool branch_taken_0x2842c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842C8u;
        // 0x2842cc: 0xae002bbc  sw          $zero, 0x2BBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842c8) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2842D0u;
label_2842d0:
    // 0x2842d0: 0x10000319  b           . + 4 + (0x319 << 2)
    ctx->pc = 0x2842D0u;
    {
        const bool branch_taken_0x2842d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842D0u;
        // 0x2842d4: 0xae022bbc  sw          $v0, 0x2BBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842d0) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2842D8u;
label_2842d8:
    // 0x2842d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2842d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842dc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2842DCu;
    SET_GPR_U32(ctx, 31, 0x2842E4u);
    ctx->pc = 0x2842E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842DCu;
    // 0x2842e0: 0x24a5a698  addiu       $a1, $a1, -0x5968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2842DCu, 0x2842E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842E4u;
label_2842e4:
    // 0x2842e4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2842E4u;
    {
        const bool branch_taken_0x2842e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2842e4) {
            ctx->pc = 0x2842E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2842E4u;
            // 0x2842e8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284330u;
            goto label_284330;
        }
    }
    ctx->pc = 0x2842ECu;
    // 0x2842ec: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2842ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2842f0: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2842f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2842f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2842f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2842f8: 0x26062bd8  addiu       $a2, $s0, 0x2BD8
    ctx->pc = 0x2842f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11224));
    // 0x2842fc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2842FCu;
    SET_GPR_U32(ctx, 31, 0x284304u);
    ctx->pc = 0x284300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842FCu;
    // 0x284300: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2842FCu, 0x284304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284304u;
label_284304:
    // 0x284304: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284304u;
    SET_GPR_U32(ctx, 31, 0x28430Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284304u, 0x28430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28430Cu;
label_28430c:
    // 0x28430c: 0x8e022bd8  lw          $v0, 0x2BD8($s0)
    ctx->pc = 0x28430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11224)));
    // 0x284310: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284310u;
    {
        const bool branch_taken_0x284310 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x284314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284310u;
        // 0x284314: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284310) {
            ctx->pc = 0x284320u;
            goto label_284320;
        }
    }
    ctx->pc = 0x284318u;
    // 0x284318: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x284318u;
    {
        const bool branch_taken_0x284318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284318u;
        // 0x28431c: 0xac602bd8  sw          $zero, 0x2BD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284318) {
            ctx->pc = 0x284328u;
            goto label_284328;
        }
    }
    ctx->pc = 0x284320u;
label_284320:
    // 0x284320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284324: 0xac622bd8  sw          $v0, 0x2BD8($v1)
    ctx->pc = 0x284324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11224), GPR_U32(ctx, 2));
label_284328:
    // 0x284328: 0x10000303  b           . + 4 + (0x303 << 2)
    ctx->pc = 0x284328u;
    {
        const bool branch_taken_0x284328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284328u;
        // 0x28432c: 0xac602bd8  sw          $zero, 0x2BD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284328) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284330u;
label_284330:
    // 0x284330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284334: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284334u;
    SET_GPR_U32(ctx, 31, 0x28433Cu);
    ctx->pc = 0x284338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284334u;
    // 0x284338: 0x24a5a6b0  addiu       $a1, $a1, -0x5950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284334u, 0x28433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28433Cu;
label_28433c:
    // 0x28433c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x28433Cu;
    {
        const bool branch_taken_0x28433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28433c) {
            ctx->pc = 0x284340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28433Cu;
            // 0x284340: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284380u;
            goto label_284380;
        }
    }
    ctx->pc = 0x284344u;
    // 0x284344: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x284344u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x284348: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28434c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28434cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284350: 0x26062b9c  addiu       $a2, $s0, 0x2B9C
    ctx->pc = 0x284350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11164));
    // 0x284354: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284354u;
    SET_GPR_U32(ctx, 31, 0x28435Cu);
    ctx->pc = 0x284358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284354u;
    // 0x284358: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284354u, 0x28435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28435Cu;
label_28435c:
    // 0x28435c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28435Cu;
    SET_GPR_U32(ctx, 31, 0x284364u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28435Cu, 0x284364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284364u;
label_284364:
    // 0x284364: 0x8e022b9c  lw          $v0, 0x2B9C($s0)
    ctx->pc = 0x284364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11164)));
    // 0x284368: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284368u;
    {
        const bool branch_taken_0x284368 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284368u;
        // 0x28436c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284368) {
            ctx->pc = 0x284378u;
            goto label_284378;
        }
    }
    ctx->pc = 0x284370u;
    // 0x284370: 0x100002f1  b           . + 4 + (0x2F1 << 2)
    ctx->pc = 0x284370u;
    {
        const bool branch_taken_0x284370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284370u;
        // 0x284374: 0xae002b9c  sw          $zero, 0x2B9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284370) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284378u;
label_284378:
    // 0x284378: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x284378u;
    {
        const bool branch_taken_0x284378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284378u;
        // 0x28437c: 0xae022b9c  sw          $v0, 0x2B9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284378) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284380u;
label_284380:
    // 0x284380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284384: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284384u;
    SET_GPR_U32(ctx, 31, 0x28438Cu);
    ctx->pc = 0x284388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284384u;
    // 0x284388: 0x24a5a6b8  addiu       $a1, $a1, -0x5948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284384u, 0x28438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28438Cu;
label_28438c:
    // 0x28438c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28438Cu;
    {
        const bool branch_taken_0x28438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28438c) {
            ctx->pc = 0x284390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28438Cu;
            // 0x284390: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2843ACu;
            goto label_2843ac;
        }
    }
    ctx->pc = 0x284394u;
    // 0x284394: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284398: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x284398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x28439c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x28439cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2843a0: 0x24a59f80  addiu       $a1, $a1, -0x6080
    ctx->pc = 0x2843a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    // 0x2843a4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2843A4u;
    {
        const bool branch_taken_0x2843a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2843A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843A4u;
        // 0x2843a8: 0x24c62bb8  addiu       $a2, $a2, 0x2BB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843a4) {
            ctx->pc = 0x28448Cu;
            goto label_28448c;
        }
    }
    ctx->pc = 0x2843ACu;
label_2843ac:
    // 0x2843ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2843acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843b0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2843B0u;
    SET_GPR_U32(ctx, 31, 0x2843B8u);
    ctx->pc = 0x2843B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843B0u;
    // 0x2843b4: 0x24a5a6c8  addiu       $a1, $a1, -0x5938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2843B0u, 0x2843B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843B8u;
label_2843b8:
    // 0x2843b8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2843B8u;
    {
        const bool branch_taken_0x2843b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2843BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843B8u;
        // 0x2843bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843b8) {
            ctx->pc = 0x284424u;
            goto label_284424;
        }
    }
    ctx->pc = 0x2843C0u;
    // 0x2843c0: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2843c4: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2843c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2843c8: 0x2665a598  addiu       $a1, $s3, -0x5A68
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944152));
    // 0x2843cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2843ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843d0: 0xae002bb8  sw          $zero, 0x2BB8($s0)
    ctx->pc = 0x2843d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482BB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BB8u, _value); } while (0);
    // 0x2843d4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2843D4u;
    SET_GPR_U32(ctx, 31, 0x2843DCu);
    ctx->pc = 0x2843D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2843D4u;
    // 0x2843d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2843D4u, 0x2843DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843DCu;
label_2843dc:
    // 0x2843dc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2843DCu;
    SET_GPR_U32(ctx, 31, 0x2843E4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2843DCu, 0x2843E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2843E4u;
label_2843e4:
    // 0x2843e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2843E4u;
    {
        const bool branch_taken_0x2843e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2843E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843E4u;
        // 0x2843e8: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843e4) {
            ctx->pc = 0x2843F4u;
            goto label_2843f4;
        }
    }
    ctx->pc = 0x2843ECu;
    // 0x2843ec: 0x0  nop
    ctx->pc = 0x2843ecu;
    // NOP
label_2843f0:
    // 0x2843f0: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x2843f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_2843f4:
    // 0x2843f4: 0x104002d0  beqz        $v0, . + 4 + (0x2D0 << 2)
    ctx->pc = 0x2843F4u;
    {
        const bool branch_taken_0x2843f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2843F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843F4u;
        // 0x2843f8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843f4) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2843FCu;
    // 0x2843fc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2843fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x284400: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x284400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284404: 0x24848f20  addiu       $a0, $a0, -0x70E0
    ctx->pc = 0x284404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938400));
    // 0x284408: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x284408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28440c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x28440Cu;
    SET_GPR_U32(ctx, 31, 0x284414u);
    ctx->pc = 0x284410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28440Cu;
    // 0x284410: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x28440Cu, 0x284414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284414u;
label_284414:
    // 0x284414: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x284414u;
    {
        const bool branch_taken_0x284414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284414) {
            ctx->pc = 0x284418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284414u;
            // 0x284418: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2843F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2843f0;
        }
    }
    ctx->pc = 0x28441Cu;
    // 0x28441c: 0x100002c6  b           . + 4 + (0x2C6 << 2)
    ctx->pc = 0x28441Cu;
    {
        const bool branch_taken_0x28441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28441Cu;
        // 0x284420: 0xae112bb8  sw          $s1, 0x2BB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11192), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28441c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284424u;
label_284424:
    // 0x284424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284428: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284428u;
    SET_GPR_U32(ctx, 31, 0x284430u);
    ctx->pc = 0x28442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284428u;
    // 0x28442c: 0x24a5a6e0  addiu       $a1, $a1, -0x5920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284428u, 0x284430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284430u;
label_284430:
    // 0x284430: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x284430u;
    {
        const bool branch_taken_0x284430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284430) {
            ctx->pc = 0x284434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284430u;
            // 0x284434: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284468u;
            goto label_284468;
        }
    }
    ctx->pc = 0x284438u;
    // 0x284438: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28443c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28443cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284440: 0x24a59f80  addiu       $a1, $a1, -0x6080
    ctx->pc = 0x284440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    // 0x284444: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x284444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x284448: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284448u;
    SET_GPR_U32(ctx, 31, 0x284450u);
    ctx->pc = 0x28444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284448u;
    // 0x28444c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284448u, 0x284450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284450u;
label_284450:
    // 0x284450: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284450u;
    SET_GPR_U32(ctx, 31, 0x284458u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284450u, 0x284458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284458u;
label_284458:
    // 0x284458: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x284458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28445c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x28445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x284460: 0x100002b5  b           . + 4 + (0x2B5 << 2)
    ctx->pc = 0x284460u;
    {
        const bool branch_taken_0x284460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284460u;
        // 0x284464: 0xac4305a0  sw          $v1, 0x5A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284460) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284468u;
label_284468:
    // 0x284468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28446c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x28446Cu;
    SET_GPR_U32(ctx, 31, 0x284474u);
    ctx->pc = 0x284470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28446Cu;
    // 0x284470: 0x24a5a6f0  addiu       $a1, $a1, -0x5910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x28446Cu, 0x284474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284474u;
label_284474:
    // 0x284474: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x284474u;
    {
        const bool branch_taken_0x284474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284474) {
            ctx->pc = 0x284478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284474u;
            // 0x284478: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2844A4u;
            goto label_2844a4;
        }
    }
    ctx->pc = 0x28447Cu;
    // 0x28447c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28447cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284480: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284484: 0x24a59f80  addiu       $a1, $a1, -0x6080
    ctx->pc = 0x284484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    // 0x284488: 0x26862bd0  addiu       $a2, $s4, 0x2BD0
    ctx->pc = 0x284488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 11216));
label_28448c:
    // 0x28448c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x28448Cu;
    SET_GPR_U32(ctx, 31, 0x284494u);
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x28448Cu, 0x284494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284494u;
label_284494:
    // 0x284494: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284494u;
    SET_GPR_U32(ctx, 31, 0x28449Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284494u, 0x28449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28449Cu;
label_28449c:
    // 0x28449c: 0x100002a7  b           . + 4 + (0x2A7 << 2)
    ctx->pc = 0x28449Cu;
    {
        const bool branch_taken_0x28449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28449Cu;
        // 0x2844a0: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28449c) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x2844A4u;
label_2844a4:
    // 0x2844a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2844a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844a8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2844A8u;
    SET_GPR_U32(ctx, 31, 0x2844B0u);
    ctx->pc = 0x2844ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844A8u;
    // 0x2844ac: 0x24a5a700  addiu       $a1, $a1, -0x5900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2844A8u, 0x2844B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844B0u;
label_2844b0:
    // 0x2844b0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2844B0u;
    {
        const bool branch_taken_0x2844b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2844b0) {
            ctx->pc = 0x2844B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2844B0u;
            // 0x2844b4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284514u;
            goto label_284514;
        }
    }
    ctx->pc = 0x2844B8u;
    // 0x2844b8: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2844b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2844bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2844bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2844c0: 0x27a60104  addiu       $a2, $sp, 0x104
    ctx->pc = 0x2844c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2844c4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2844C4u;
    SET_GPR_U32(ctx, 31, 0x2844CCu);
    ctx->pc = 0x2844C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844C4u;
    // 0x2844c8: 0x24a59f80  addiu       $a1, $a1, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2844C4u, 0x2844CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844CCu;
label_2844cc:
    // 0x2844cc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2844CCu;
    SET_GPR_U32(ctx, 31, 0x2844D4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2844CCu, 0x2844D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844D4u;
label_2844d4:
    // 0x2844d4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2844d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2844d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2844d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2844dc: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x2844dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x2844e0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2844E0u;
    SET_GPR_U32(ctx, 31, 0x2844E8u);
    ctx->pc = 0x2844E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844E0u;
    // 0x2844e4: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2844E0u, 0x2844E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844E8u;
label_2844e8:
    // 0x2844e8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2844E8u;
    SET_GPR_U32(ctx, 31, 0x2844F0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2844E8u, 0x2844F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844F0u;
label_2844f0:
    // 0x2844f0: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2844f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2844f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2844f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2844f8: 0x2463b970  addiu       $v1, $v1, -0x4690
    ctx->pc = 0x2844f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949232));
    // 0x2844fc: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x2844fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284500: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x284500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x284504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x284508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28450c: 0x1000028a  b           . + 4 + (0x28A << 2)
    ctx->pc = 0x28450Cu;
    {
        const bool branch_taken_0x28450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28450Cu;
        // 0x284510: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28450c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284514u;
label_284514:
    // 0x284514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284518: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284518u;
    SET_GPR_U32(ctx, 31, 0x284520u);
    ctx->pc = 0x28451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284518u;
    // 0x28451c: 0x24a5a720  addiu       $a1, $a1, -0x58E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284518u, 0x284520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284520u;
label_284520:
    // 0x284520: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x284520u;
    {
        const bool branch_taken_0x284520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284520) {
            ctx->pc = 0x284524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284520u;
            // 0x284524: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284554u;
            goto label_284554;
        }
    }
    ctx->pc = 0x284528u;
    // 0x284528: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28452c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28452cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284530: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x284530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x284534: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284534u;
    SET_GPR_U32(ctx, 31, 0x28453Cu);
    ctx->pc = 0x284538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284534u;
    // 0x284538: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284534u, 0x28453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28453Cu;
label_28453c:
    // 0x28453c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28453Cu;
    SET_GPR_U32(ctx, 31, 0x284544u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28453Cu, 0x284544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284544u;
label_284544:
    // 0x284544: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x284544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284548: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x284548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28454c: 0x1000027a  b           . + 4 + (0x27A << 2)
    ctx->pc = 0x28454Cu;
    {
        const bool branch_taken_0x28454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28454Cu;
        // 0x284550: 0xe440b984  swc1        $f0, -0x467C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28454c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284554u;
label_284554:
    // 0x284554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284558: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284558u;
    SET_GPR_U32(ctx, 31, 0x284560u);
    ctx->pc = 0x28455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284558u;
    // 0x28455c: 0x24a5a738  addiu       $a1, $a1, -0x58C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284558u, 0x284560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284560u;
label_284560:
    // 0x284560: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x284560u;
    {
        const bool branch_taken_0x284560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284560) {
            ctx->pc = 0x284564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284560u;
            // 0x284564: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284594u;
            goto label_284594;
        }
    }
    ctx->pc = 0x284568u;
    // 0x284568: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28456c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28456cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284570: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x284570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x284574: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284574u;
    SET_GPR_U32(ctx, 31, 0x28457Cu);
    ctx->pc = 0x284578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284574u;
    // 0x284578: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284574u, 0x28457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28457Cu;
label_28457c:
    // 0x28457c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28457Cu;
    SET_GPR_U32(ctx, 31, 0x284584u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28457Cu, 0x284584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284584u;
label_284584:
    // 0x284584: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x284584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284588: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x284588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28458c: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x28458Cu;
    {
        const bool branch_taken_0x28458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28458Cu;
        // 0x284590: 0xe440b990  swc1        $f0, -0x4670($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28458c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284594u;
label_284594:
    // 0x284594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284598: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284598u;
    SET_GPR_U32(ctx, 31, 0x2845A0u);
    ctx->pc = 0x28459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284598u;
    // 0x28459c: 0x24a5a758  addiu       $a1, $a1, -0x58A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284598u, 0x2845A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845A0u;
label_2845a0:
    // 0x2845a0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2845A0u;
    {
        const bool branch_taken_0x2845a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2845a0) {
            ctx->pc = 0x2845A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2845A0u;
            // 0x2845a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2845D4u;
            goto label_2845d4;
        }
    }
    ctx->pc = 0x2845A8u;
    // 0x2845a8: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2845a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2845ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2845acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2845b0: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x2845b4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2845B4u;
    SET_GPR_U32(ctx, 31, 0x2845BCu);
    ctx->pc = 0x2845B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845B4u;
    // 0x2845b8: 0x27a60114  addiu       $a2, $sp, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2845B4u, 0x2845BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845BCu;
label_2845bc:
    // 0x2845bc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2845BCu;
    SET_GPR_U32(ctx, 31, 0x2845C4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2845BCu, 0x2845C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845C4u;
label_2845c4:
    // 0x2845c4: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2845c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2845c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2845c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2845cc: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x2845CCu;
    {
        const bool branch_taken_0x2845cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2845D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845CCu;
        // 0x2845d0: 0xe440b994  swc1        $f0, -0x466C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845cc) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2845D4u;
label_2845d4:
    // 0x2845d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2845d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2845d8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2845D8u;
    SET_GPR_U32(ctx, 31, 0x2845E0u);
    ctx->pc = 0x2845DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845D8u;
    // 0x2845dc: 0x24a5a780  addiu       $a1, $a1, -0x5880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2845D8u, 0x2845E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845E0u;
label_2845e0:
    // 0x2845e0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2845E0u;
    {
        const bool branch_taken_0x2845e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2845e0) {
            ctx->pc = 0x2845E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2845E0u;
            // 0x2845e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284614u;
            goto label_284614;
        }
    }
    ctx->pc = 0x2845E8u;
    // 0x2845e8: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2845e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2845ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2845ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2845f0: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x2845f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x2845f4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2845F4u;
    SET_GPR_U32(ctx, 31, 0x2845FCu);
    ctx->pc = 0x2845F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845F4u;
    // 0x2845f8: 0x27a60118  addiu       $a2, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2845F4u, 0x2845FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845FCu;
label_2845fc:
    // 0x2845fc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2845FCu;
    SET_GPR_U32(ctx, 31, 0x284604u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2845FCu, 0x284604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284604u;
label_284604:
    // 0x284604: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x284604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284608: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x284608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28460c: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x28460Cu;
    {
        const bool branch_taken_0x28460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28460Cu;
        // 0x284610: 0xe440b998  swc1        $f0, -0x4668($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28460c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284614u;
label_284614:
    // 0x284614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284618: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284618u;
    SET_GPR_U32(ctx, 31, 0x284620u);
    ctx->pc = 0x28461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284618u;
    // 0x28461c: 0x24a5a7a8  addiu       $a1, $a1, -0x5858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284618u, 0x284620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284620u;
label_284620:
    // 0x284620: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x284620u;
    {
        const bool branch_taken_0x284620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284620) {
            ctx->pc = 0x284624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284620u;
            // 0x284624: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284654u;
            goto label_284654;
        }
    }
    ctx->pc = 0x284628u;
    // 0x284628: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28462c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28462cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284630: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x284630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x284634: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284634u;
    SET_GPR_U32(ctx, 31, 0x28463Cu);
    ctx->pc = 0x284638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284634u;
    // 0x284638: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284634u, 0x28463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28463Cu;
label_28463c:
    // 0x28463c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28463Cu;
    SET_GPR_U32(ctx, 31, 0x284644u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28463Cu, 0x284644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284644u;
label_284644:
    // 0x284644: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x284644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284648: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x284648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28464c: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x28464Cu;
    {
        const bool branch_taken_0x28464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28464Cu;
        // 0x284650: 0xe440b99c  swc1        $f0, -0x4664($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28464c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284654u;
label_284654:
    // 0x284654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284658: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284658u;
    SET_GPR_U32(ctx, 31, 0x284660u);
    ctx->pc = 0x28465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284658u;
    // 0x28465c: 0x24a5a7d0  addiu       $a1, $a1, -0x5830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284658u, 0x284660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284660u;
label_284660:
    // 0x284660: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x284660u;
    {
        const bool branch_taken_0x284660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284660) {
            ctx->pc = 0x284664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284660u;
            // 0x284664: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284694u;
            goto label_284694;
        }
    }
    ctx->pc = 0x284668u;
    // 0x284668: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28466c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28466cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284670: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x284670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x284674: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284674u;
    SET_GPR_U32(ctx, 31, 0x28467Cu);
    ctx->pc = 0x284678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284674u;
    // 0x284678: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284674u, 0x28467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28467Cu;
label_28467c:
    // 0x28467c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28467Cu;
    SET_GPR_U32(ctx, 31, 0x284684u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28467Cu, 0x284684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284684u;
label_284684:
    // 0x284684: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x284684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284688: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x284688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28468c: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x28468Cu;
    {
        const bool branch_taken_0x28468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28468Cu;
        // 0x284690: 0xe440b9a0  swc1        $f0, -0x4660($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28468c) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284694u;
label_284694:
    // 0x284694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284698: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x284698u;
    SET_GPR_U32(ctx, 31, 0x2846A0u);
    ctx->pc = 0x28469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284698u;
    // 0x28469c: 0x24a5a7f8  addiu       $a1, $a1, -0x5808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x284698u, 0x2846A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846A0u;
label_2846a0:
    // 0x2846a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2846A0u;
    {
        const bool branch_taken_0x2846a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2846A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846A0u;
        // 0x2846a4: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846a0) {
            ctx->pc = 0x284710u;
            goto label_284710;
        }
    }
    ctx->pc = 0x2846A8u;
    // 0x2846a8: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2846a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2846ac: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x2846acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x2846b0: 0x27a60124  addiu       $a2, $sp, 0x124
    ctx->pc = 0x2846b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2846b4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2846B4u;
    SET_GPR_U32(ctx, 31, 0x2846BCu);
    ctx->pc = 0x2846B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846B4u;
    // 0x2846b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2846B4u, 0x2846BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846BCu;
label_2846bc:
    // 0x2846bc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2846BCu;
    SET_GPR_U32(ctx, 31, 0x2846C4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2846BCu, 0x2846C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846C4u;
label_2846c4:
    // 0x2846c4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2846c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2846c8: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x2846c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2846cc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2846CCu;
    SET_GPR_U32(ctx, 31, 0x2846D4u);
    ctx->pc = 0x2846D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846CCu;
    // 0x2846d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2846CCu, 0x2846D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846D4u;
label_2846d4:
    // 0x2846d4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2846D4u;
    SET_GPR_U32(ctx, 31, 0x2846DCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2846D4u, 0x2846DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846DCu;
label_2846dc:
    // 0x2846dc: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2846dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2846e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2846e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846e4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2846E4u;
    SET_GPR_U32(ctx, 31, 0x2846ECu);
    ctx->pc = 0x2846E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846E4u;
    // 0x2846e8: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2846E4u, 0x2846ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846ECu;
label_2846ec:
    // 0x2846ec: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2846ECu;
    SET_GPR_U32(ctx, 31, 0x2846F4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2846ECu, 0x2846F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846F4u;
label_2846f4:
    // 0x2846f4: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x2846f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2846f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2846f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846fc: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2846fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x284700: 0xc0a2dfc  jal         func_28B7F0
    ctx->pc = 0x284700u;
    SET_GPR_U32(ctx, 31, 0x284708u);
    ctx->pc = 0x284704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284700u;
    // 0x284704: 0x8fa7012c  lw          $a3, 0x12C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B7F0u, 0x284700u, 0x284708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284708u;
label_284708:
    // 0x284708: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x284708u;
    {
        const bool branch_taken_0x284708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284708u;
        // 0x28470c: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284708) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284710u;
label_284710:
    // 0x284710: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284718: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x284718u;
    SET_GPR_U32(ctx, 31, 0x284720u);
    ctx->pc = 0x28471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284718u;
    // 0x28471c: 0x24a5a808  addiu       $a1, $a1, -0x57F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x284718u, 0x284720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284720u;
label_284720:
    // 0x284720: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x284720u;
    {
        const bool branch_taken_0x284720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284720u;
        // 0x284724: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284720) {
            ctx->pc = 0x2847ACu;
            goto label_2847ac;
        }
    }
    ctx->pc = 0x284728u;
    // 0x284728: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28472c: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x28472cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284730: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x284730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x284734: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284734u;
    SET_GPR_U32(ctx, 31, 0x28473Cu);
    ctx->pc = 0x284738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284734u;
    // 0x284738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284734u, 0x28473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28473Cu;
label_28473c:
    // 0x28473c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28473Cu;
    SET_GPR_U32(ctx, 31, 0x284744u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28473Cu, 0x284744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284744u;
label_284744:
    // 0x284744: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284748: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x284748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x28474c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x28474Cu;
    SET_GPR_U32(ctx, 31, 0x284754u);
    ctx->pc = 0x284750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28474Cu;
    // 0x284750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x28474Cu, 0x284754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284754u;
label_284754:
    // 0x284754: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284754u;
    SET_GPR_U32(ctx, 31, 0x28475Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284754u, 0x28475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28475Cu;
label_28475c:
    // 0x28475c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x28475cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284760: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x284760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x284764: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284764u;
    SET_GPR_U32(ctx, 31, 0x28476Cu);
    ctx->pc = 0x284768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284764u;
    // 0x284768: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284764u, 0x28476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28476Cu;
label_28476c:
    // 0x28476c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28476Cu;
    SET_GPR_U32(ctx, 31, 0x284774u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28476Cu, 0x284774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284774u;
label_284774:
    // 0x284774: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28477c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x28477Cu;
    SET_GPR_U32(ctx, 31, 0x284784u);
    ctx->pc = 0x284780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28477Cu;
    // 0x284780: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x28477Cu, 0x284784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284784u;
label_284784:
    // 0x284784: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284784u;
    SET_GPR_U32(ctx, 31, 0x28478Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284784u, 0x28478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28478Cu;
label_28478c:
    // 0x28478c: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x28478cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x284790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284794: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x284794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x284798: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x284798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28479c: 0xc0a3cec  jal         func_28F3B0
    ctx->pc = 0x28479Cu;
    SET_GPR_U32(ctx, 31, 0x2847A4u);
    ctx->pc = 0x2847A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28479Cu;
    // 0x2847a0: 0x8fa8013c  lw          $t0, 0x13C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F3B0u, 0x28479Cu, 0x2847A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847A4u;
label_2847a4:
    // 0x2847a4: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x2847A4u;
    {
        const bool branch_taken_0x2847a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847A4u;
        // 0x2847a8: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847a4) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x2847ACu;
label_2847ac:
    // 0x2847ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2847acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2847b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2847b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847b4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2847B4u;
    SET_GPR_U32(ctx, 31, 0x2847BCu);
    ctx->pc = 0x2847B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847B4u;
    // 0x2847b8: 0x24a5a820  addiu       $a1, $a1, -0x57E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2847B4u, 0x2847BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847BCu;
label_2847bc:
    // 0x2847bc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2847BCu;
    {
        const bool branch_taken_0x2847bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2847bc) {
            ctx->pc = 0x2847C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2847BCu;
            // 0x2847c0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2847F0u;
            goto label_2847f0;
        }
    }
    ctx->pc = 0x2847C4u;
    // 0x2847c4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2847c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2847c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2847c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2847cc: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x2847ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x2847d0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2847D0u;
    SET_GPR_U32(ctx, 31, 0x2847D8u);
    ctx->pc = 0x2847D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847D0u;
    // 0x2847d4: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2847D0u, 0x2847D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847D8u;
label_2847d8:
    // 0x2847d8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2847D8u;
    SET_GPR_U32(ctx, 31, 0x2847E0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2847D8u, 0x2847E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847E0u;
label_2847e0:
    // 0x2847e0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2847e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2847e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2847e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2847e8: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x2847E8u;
    {
        const bool branch_taken_0x2847e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847E8u;
        // 0x2847ec: 0xe440a7f8  swc1        $f0, -0x5808($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847e8) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x2847F0u;
label_2847f0:
    // 0x2847f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2847f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847f4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2847F4u;
    SET_GPR_U32(ctx, 31, 0x2847FCu);
    ctx->pc = 0x2847F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847F4u;
    // 0x2847f8: 0x24a5a840  addiu       $a1, $a1, -0x57C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2847F4u, 0x2847FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847FCu;
label_2847fc:
    // 0x2847fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2847FCu;
    {
        const bool branch_taken_0x2847fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2847fc) {
            ctx->pc = 0x284800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2847FCu;
            // 0x284800: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284830u;
            goto label_284830;
        }
    }
    ctx->pc = 0x284804u;
    // 0x284804: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284808: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28480c: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x28480cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x284810: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284810u;
    SET_GPR_U32(ctx, 31, 0x284818u);
    ctx->pc = 0x284814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284810u;
    // 0x284814: 0x27a60144  addiu       $a2, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284810u, 0x284818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284818u;
label_284818:
    // 0x284818: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284818u;
    SET_GPR_U32(ctx, 31, 0x284820u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284818u, 0x284820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284820u;
label_284820:
    // 0x284820: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x284820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284824: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x284824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x284828: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x284828u;
    {
        const bool branch_taken_0x284828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284828u;
        // 0x28482c: 0xe440a7fc  swc1        $f0, -0x5804($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284828) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284830u;
label_284830:
    // 0x284830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284834: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284834u;
    SET_GPR_U32(ctx, 31, 0x28483Cu);
    ctx->pc = 0x284838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284834u;
    // 0x284838: 0x24a5a868  addiu       $a1, $a1, -0x5798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284834u, 0x28483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28483Cu;
label_28483c:
    // 0x28483c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x28483Cu;
    {
        const bool branch_taken_0x28483c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28483c) {
            ctx->pc = 0x284840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28483Cu;
            // 0x284840: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2848D0u;
            goto label_2848d0;
        }
    }
    ctx->pc = 0x284844u;
    // 0x284844: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x284844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x284848: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28484c: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x28484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284850: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x284850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x284854: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284854u;
    SET_GPR_U32(ctx, 31, 0x28485Cu);
    ctx->pc = 0x284858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284854u;
    // 0x284858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284854u, 0x28485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28485Cu;
label_28485c:
    // 0x28485c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28485Cu;
    SET_GPR_U32(ctx, 31, 0x284864u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28485Cu, 0x284864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284864u;
label_284864:
    // 0x284864: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284868: 0x27a6014c  addiu       $a2, $sp, 0x14C
    ctx->pc = 0x284868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x28486c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x28486Cu;
    SET_GPR_U32(ctx, 31, 0x284874u);
    ctx->pc = 0x284870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28486Cu;
    // 0x284870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x28486Cu, 0x284874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284874u;
label_284874:
    // 0x284874: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284874u;
    SET_GPR_U32(ctx, 31, 0x28487Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284874u, 0x28487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28487Cu;
label_28487c:
    // 0x28487c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x28487cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284880: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x284880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x284884: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284884u;
    SET_GPR_U32(ctx, 31, 0x28488Cu);
    ctx->pc = 0x284888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284884u;
    // 0x284888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284884u, 0x28488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28488Cu;
label_28488c:
    // 0x28488c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28488Cu;
    SET_GPR_U32(ctx, 31, 0x284894u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28488Cu, 0x284894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284894u;
label_284894:
    // 0x284894: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28489c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x28489Cu;
    SET_GPR_U32(ctx, 31, 0x2848A4u);
    ctx->pc = 0x2848A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28489Cu;
    // 0x2848a0: 0x27a60154  addiu       $a2, $sp, 0x154 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x28489Cu, 0x2848A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848A4u;
label_2848a4:
    // 0x2848a4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2848A4u;
    SET_GPR_U32(ctx, 31, 0x2848ACu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2848A4u, 0x2848ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848ACu;
label_2848ac:
    // 0x2848ac: 0xc0a6bf0  jal         func_29AFC0
    ctx->pc = 0x2848ACu;
    SET_GPR_U32(ctx, 31, 0x2848B4u);
    ctx->pc = 0x29AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFC0u, 0x2848ACu, 0x2848B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848B4u;
label_2848b4:
    // 0x2848b4: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x2848b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2848b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2848b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848bc: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2848c0: 0xc0a6d5e  jal         func_29B578
    ctx->pc = 0x2848C0u;
    SET_GPR_U32(ctx, 31, 0x2848C8u);
    ctx->pc = 0x2848C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848C0u;
    // 0x2848c4: 0x8fa70150  lw          $a3, 0x150($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B578u, 0x2848C0u, 0x2848C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848C8u;
label_2848c8:
    // 0x2848c8: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x2848C8u;
    {
        const bool branch_taken_0x2848c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848C8u;
        // 0x2848cc: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848c8) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x2848D0u;
label_2848d0:
    // 0x2848d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2848d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848d4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2848D4u;
    SET_GPR_U32(ctx, 31, 0x2848DCu);
    ctx->pc = 0x2848D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848D4u;
    // 0x2848d8: 0x24a5a888  addiu       $a1, $a1, -0x5778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2848D4u, 0x2848DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848DCu;
label_2848dc:
    // 0x2848dc: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2848DCu;
    {
        const bool branch_taken_0x2848dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2848dc) {
            ctx->pc = 0x2848E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2848DCu;
            // 0x2848e0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284970u;
            goto label_284970;
        }
    }
    ctx->pc = 0x2848E4u;
    // 0x2848e4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2848e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2848e8: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2848e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2848ec: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x2848ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x2848f0: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x2848f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x2848f4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2848F4u;
    SET_GPR_U32(ctx, 31, 0x2848FCu);
    ctx->pc = 0x2848F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848F4u;
    // 0x2848f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2848F4u, 0x2848FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848FCu;
label_2848fc:
    // 0x2848fc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2848FCu;
    SET_GPR_U32(ctx, 31, 0x284904u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2848FCu, 0x284904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284904u;
label_284904:
    // 0x284904: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284908: 0x27a6015c  addiu       $a2, $sp, 0x15C
    ctx->pc = 0x284908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x28490c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x28490Cu;
    SET_GPR_U32(ctx, 31, 0x284914u);
    ctx->pc = 0x284910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28490Cu;
    // 0x284910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x28490Cu, 0x284914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284914u;
label_284914:
    // 0x284914: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284914u;
    SET_GPR_U32(ctx, 31, 0x28491Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284914u, 0x28491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28491Cu;
label_28491c:
    // 0x28491c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x28491cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284920: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x284920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x284924: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284924u;
    SET_GPR_U32(ctx, 31, 0x28492Cu);
    ctx->pc = 0x284928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284924u;
    // 0x284928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284924u, 0x28492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28492Cu;
label_28492c:
    // 0x28492c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28492Cu;
    SET_GPR_U32(ctx, 31, 0x284934u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28492Cu, 0x284934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284934u;
label_284934:
    // 0x284934: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28493c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x28493Cu;
    SET_GPR_U32(ctx, 31, 0x284944u);
    ctx->pc = 0x284940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28493Cu;
    // 0x284940: 0x27a60164  addiu       $a2, $sp, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x28493Cu, 0x284944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284944u;
label_284944:
    // 0x284944: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284944u;
    SET_GPR_U32(ctx, 31, 0x28494Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284944u, 0x28494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28494Cu;
label_28494c:
    // 0x28494c: 0xc0a6bf0  jal         func_29AFC0
    ctx->pc = 0x28494Cu;
    SET_GPR_U32(ctx, 31, 0x284954u);
    ctx->pc = 0x29AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFC0u, 0x28494Cu, 0x284954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284954u;
label_284954:
    // 0x284954: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x284954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x284958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28495c: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x28495cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x284960: 0xc0a6d62  jal         func_29B588
    ctx->pc = 0x284960u;
    SET_GPR_U32(ctx, 31, 0x284968u);
    ctx->pc = 0x284964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284960u;
    // 0x284964: 0x8fa70160  lw          $a3, 0x160($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B588u, 0x284960u, 0x284968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284968u;
label_284968:
    // 0x284968: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x284968u;
    {
        const bool branch_taken_0x284968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284968u;
        // 0x28496c: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284968) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284970u;
label_284970:
    // 0x284970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284974: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284974u;
    SET_GPR_U32(ctx, 31, 0x28497Cu);
    ctx->pc = 0x284978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284974u;
    // 0x284978: 0x24a5a8a8  addiu       $a1, $a1, -0x5758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284974u, 0x28497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28497Cu;
label_28497c:
    // 0x28497c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x28497Cu;
    {
        const bool branch_taken_0x28497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28497c) {
            ctx->pc = 0x284980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28497Cu;
            // 0x284980: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284A10u;
            goto label_284a10;
        }
    }
    ctx->pc = 0x284984u;
    // 0x284984: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x284984u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x284988: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x28498c: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x28498cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284990: 0x27a60168  addiu       $a2, $sp, 0x168
    ctx->pc = 0x284990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x284994: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284994u;
    SET_GPR_U32(ctx, 31, 0x28499Cu);
    ctx->pc = 0x284998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284994u;
    // 0x284998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284994u, 0x28499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28499Cu;
label_28499c:
    // 0x28499c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28499Cu;
    SET_GPR_U32(ctx, 31, 0x2849A4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28499Cu, 0x2849A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849A4u;
label_2849a4:
    // 0x2849a4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2849a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2849a8: 0x27a6016c  addiu       $a2, $sp, 0x16C
    ctx->pc = 0x2849a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x2849ac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2849ACu;
    SET_GPR_U32(ctx, 31, 0x2849B4u);
    ctx->pc = 0x2849B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849ACu;
    // 0x2849b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2849ACu, 0x2849B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849B4u;
label_2849b4:
    // 0x2849b4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2849B4u;
    SET_GPR_U32(ctx, 31, 0x2849BCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2849B4u, 0x2849BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849BCu;
label_2849bc:
    // 0x2849bc: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2849bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2849c0: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2849c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2849c4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2849C4u;
    SET_GPR_U32(ctx, 31, 0x2849CCu);
    ctx->pc = 0x2849C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849C4u;
    // 0x2849c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2849C4u, 0x2849CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849CCu;
label_2849cc:
    // 0x2849cc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2849CCu;
    SET_GPR_U32(ctx, 31, 0x2849D4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2849CCu, 0x2849D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849D4u;
label_2849d4:
    // 0x2849d4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2849d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2849d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2849d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849dc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2849DCu;
    SET_GPR_U32(ctx, 31, 0x2849E4u);
    ctx->pc = 0x2849E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849DCu;
    // 0x2849e0: 0x27a60174  addiu       $a2, $sp, 0x174 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2849DCu, 0x2849E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849E4u;
label_2849e4:
    // 0x2849e4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2849E4u;
    SET_GPR_U32(ctx, 31, 0x2849ECu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2849E4u, 0x2849ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849ECu;
label_2849ec:
    // 0x2849ec: 0xc0a6bf0  jal         func_29AFC0
    ctx->pc = 0x2849ECu;
    SET_GPR_U32(ctx, 31, 0x2849F4u);
    ctx->pc = 0x29AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFC0u, 0x2849ECu, 0x2849F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849F4u;
label_2849f4:
    // 0x2849f4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2849f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2849f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2849f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849fc: 0x8fa6016c  lw          $a2, 0x16C($sp)
    ctx->pc = 0x2849fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x284a00: 0xc0a6d6a  jal         func_29B5A8
    ctx->pc = 0x284A00u;
    SET_GPR_U32(ctx, 31, 0x284A08u);
    ctx->pc = 0x284A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A00u;
    // 0x284a04: 0x8fa70170  lw          $a3, 0x170($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5A8u, 0x284A00u, 0x284A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A08u;
label_284a08:
    // 0x284a08: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x284A08u;
    {
        const bool branch_taken_0x284a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A08u;
        // 0x284a0c: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a08) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284A10u;
label_284a10:
    // 0x284a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a14: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284A14u;
    SET_GPR_U32(ctx, 31, 0x284A1Cu);
    ctx->pc = 0x284A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A14u;
    // 0x284a18: 0x24a5a8c8  addiu       $a1, $a1, -0x5738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284A14u, 0x284A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A1Cu;
label_284a1c:
    // 0x284a1c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x284A1Cu;
    {
        const bool branch_taken_0x284a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284a1c) {
            ctx->pc = 0x284A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284A1Cu;
            // 0x284a20: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284AB0u;
            goto label_284ab0;
        }
    }
    ctx->pc = 0x284A24u;
    // 0x284a24: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x284a24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x284a28: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284a2c: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284a30: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x284a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x284a34: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284A34u;
    SET_GPR_U32(ctx, 31, 0x284A3Cu);
    ctx->pc = 0x284A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A34u;
    // 0x284a38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284A34u, 0x284A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A3Cu;
label_284a3c:
    // 0x284a3c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284A3Cu;
    SET_GPR_U32(ctx, 31, 0x284A44u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284A3Cu, 0x284A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A44u;
label_284a44:
    // 0x284a44: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284a48: 0x27a6017c  addiu       $a2, $sp, 0x17C
    ctx->pc = 0x284a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x284a4c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284A4Cu;
    SET_GPR_U32(ctx, 31, 0x284A54u);
    ctx->pc = 0x284A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A4Cu;
    // 0x284a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284A4Cu, 0x284A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A54u;
label_284a54:
    // 0x284a54: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284A54u;
    SET_GPR_U32(ctx, 31, 0x284A5Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284A54u, 0x284A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A5Cu;
label_284a5c:
    // 0x284a5c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284a60: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x284a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x284a64: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284A64u;
    SET_GPR_U32(ctx, 31, 0x284A6Cu);
    ctx->pc = 0x284A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A64u;
    // 0x284a68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284A64u, 0x284A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A6Cu;
label_284a6c:
    // 0x284a6c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284A6Cu;
    SET_GPR_U32(ctx, 31, 0x284A74u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284A6Cu, 0x284A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A74u;
label_284a74:
    // 0x284a74: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284a78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a7c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284A7Cu;
    SET_GPR_U32(ctx, 31, 0x284A84u);
    ctx->pc = 0x284A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A7Cu;
    // 0x284a80: 0x27a60184  addiu       $a2, $sp, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284A7Cu, 0x284A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A84u;
label_284a84:
    // 0x284a84: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284A84u;
    SET_GPR_U32(ctx, 31, 0x284A8Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284A84u, 0x284A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A8Cu;
label_284a8c:
    // 0x284a8c: 0xc0a6bf0  jal         func_29AFC0
    ctx->pc = 0x284A8Cu;
    SET_GPR_U32(ctx, 31, 0x284A94u);
    ctx->pc = 0x29AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFC0u, 0x284A8Cu, 0x284A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A94u;
label_284a94:
    // 0x284a94: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x284a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x284a98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a9c: 0x8fa6017c  lw          $a2, 0x17C($sp)
    ctx->pc = 0x284a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x284aa0: 0xc0a6d66  jal         func_29B598
    ctx->pc = 0x284AA0u;
    SET_GPR_U32(ctx, 31, 0x284AA8u);
    ctx->pc = 0x284AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AA0u;
    // 0x284aa4: 0x8fa70180  lw          $a3, 0x180($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B598u, 0x284AA0u, 0x284AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AA8u;
label_284aa8:
    // 0x284aa8: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x284AA8u;
    {
        const bool branch_taken_0x284aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AA8u;
        // 0x284aac: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284aa8) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284AB0u;
label_284ab0:
    // 0x284ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ab4: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x284AB4u;
    SET_GPR_U32(ctx, 31, 0x284ABCu);
    ctx->pc = 0x284AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AB4u;
    // 0x284ab8: 0x24a5a8e8  addiu       $a1, $a1, -0x5718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x284AB4u, 0x284ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284ABCu;
label_284abc:
    // 0x284abc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x284ABCu;
    {
        const bool branch_taken_0x284abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284ABCu;
        // 0x284ac0: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284abc) {
            ctx->pc = 0x284AF0u;
            goto label_284af0;
        }
    }
    ctx->pc = 0x284AC4u;
    // 0x284ac4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284ac8: 0x24a5a680  addiu       $a1, $a1, -0x5980
    ctx->pc = 0x284ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
    // 0x284acc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284ACCu;
    SET_GPR_U32(ctx, 31, 0x284AD4u);
    ctx->pc = 0x284AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284ACCu;
    // 0x284ad0: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284ACCu, 0x284AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AD4u;
label_284ad4:
    // 0x284ad4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284AD4u;
    SET_GPR_U32(ctx, 31, 0x284ADCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284AD4u, 0x284ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284ADCu;
label_284adc:
    // 0x284adc: 0xc7ac0188  lwc1        $f12, 0x188($sp)
    ctx->pc = 0x284adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284ae0: 0xc0a2e26  jal         func_28B898
    ctx->pc = 0x284AE0u;
    SET_GPR_U32(ctx, 31, 0x284AE8u);
    ctx->pc = 0x284AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AE0u;
    // 0x284ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B898u, 0x284AE0u, 0x284AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AE8u;
label_284ae8:
    // 0x284ae8: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x284AE8u;
    {
        const bool branch_taken_0x284ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AE8u;
        // 0x284aec: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ae8) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284AF0u;
label_284af0:
    // 0x284af0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284af8: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x284AF8u;
    SET_GPR_U32(ctx, 31, 0x284B00u);
    ctx->pc = 0x284AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AF8u;
    // 0x284afc: 0x24a5a8f8  addiu       $a1, $a1, -0x5708 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x284AF8u, 0x284B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B00u;
label_284b00:
    // 0x284b00: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x284B00u;
    {
        const bool branch_taken_0x284b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B00u;
        // 0x284b04: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b00) {
            ctx->pc = 0x284B70u;
            goto label_284b70;
        }
    }
    ctx->pc = 0x284B08u;
    // 0x284b08: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284b0c: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284b10: 0x27a6018c  addiu       $a2, $sp, 0x18C
    ctx->pc = 0x284b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x284b14: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284B14u;
    SET_GPR_U32(ctx, 31, 0x284B1Cu);
    ctx->pc = 0x284B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B14u;
    // 0x284b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284B14u, 0x284B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B1Cu;
label_284b1c:
    // 0x284b1c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284B1Cu;
    SET_GPR_U32(ctx, 31, 0x284B24u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284B1Cu, 0x284B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B24u;
label_284b24:
    // 0x284b24: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284b28: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x284b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x284b2c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284B2Cu;
    SET_GPR_U32(ctx, 31, 0x284B34u);
    ctx->pc = 0x284B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B2Cu;
    // 0x284b30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284B2Cu, 0x284B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B34u;
label_284b34:
    // 0x284b34: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284B34u;
    SET_GPR_U32(ctx, 31, 0x284B3Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284B34u, 0x284B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B3Cu;
label_284b3c:
    // 0x284b3c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284b40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b44: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284B44u;
    SET_GPR_U32(ctx, 31, 0x284B4Cu);
    ctx->pc = 0x284B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B44u;
    // 0x284b48: 0x27a60194  addiu       $a2, $sp, 0x194 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284B44u, 0x284B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B4Cu;
label_284b4c:
    // 0x284b4c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284B4Cu;
    SET_GPR_U32(ctx, 31, 0x284B54u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284B4Cu, 0x284B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B54u;
label_284b54:
    // 0x284b54: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x284b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x284b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b5c: 0x8fa60190  lw          $a2, 0x190($sp)
    ctx->pc = 0x284b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x284b60: 0xc0982e4  jal         func_260B90
    ctx->pc = 0x284B60u;
    SET_GPR_U32(ctx, 31, 0x284B68u);
    ctx->pc = 0x284B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B60u;
    // 0x284b64: 0x8fa70194  lw          $a3, 0x194($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B90u, 0x284B60u, 0x284B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B68u;
label_284b68:
    // 0x284b68: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x284B68u;
    {
        const bool branch_taken_0x284b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B68u;
        // 0x284b6c: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b68) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284B70u;
label_284b70:
    // 0x284b70: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284b78: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x284B78u;
    SET_GPR_U32(ctx, 31, 0x284B80u);
    ctx->pc = 0x284B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B78u;
    // 0x284b7c: 0x24a5a908  addiu       $a1, $a1, -0x56F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x284B78u, 0x284B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B80u;
label_284b80:
    // 0x284b80: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x284B80u;
    {
        const bool branch_taken_0x284b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B80u;
        // 0x284b84: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b80) {
            ctx->pc = 0x284C0Cu;
            goto label_284c0c;
        }
    }
    ctx->pc = 0x284B88u;
    // 0x284b88: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284b8c: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284b90: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x284b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x284b94: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284B94u;
    SET_GPR_U32(ctx, 31, 0x284B9Cu);
    ctx->pc = 0x284B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B94u;
    // 0x284b98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284B94u, 0x284B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B9Cu;
label_284b9c:
    // 0x284b9c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284B9Cu;
    SET_GPR_U32(ctx, 31, 0x284BA4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284B9Cu, 0x284BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BA4u;
label_284ba4:
    // 0x284ba4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284ba8: 0x27a6019c  addiu       $a2, $sp, 0x19C
    ctx->pc = 0x284ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x284bac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284BACu;
    SET_GPR_U32(ctx, 31, 0x284BB4u);
    ctx->pc = 0x284BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BACu;
    // 0x284bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284BACu, 0x284BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BB4u;
label_284bb4:
    // 0x284bb4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284BB4u;
    SET_GPR_U32(ctx, 31, 0x284BBCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284BB4u, 0x284BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BBCu;
label_284bbc:
    // 0x284bbc: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284bc0: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x284bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x284bc4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284BC4u;
    SET_GPR_U32(ctx, 31, 0x284BCCu);
    ctx->pc = 0x284BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BC4u;
    // 0x284bc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284BC4u, 0x284BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BCCu;
label_284bcc:
    // 0x284bcc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284BCCu;
    SET_GPR_U32(ctx, 31, 0x284BD4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284BCCu, 0x284BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BD4u;
label_284bd4:
    // 0x284bd4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284bd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bdc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284BDCu;
    SET_GPR_U32(ctx, 31, 0x284BE4u);
    ctx->pc = 0x284BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BDCu;
    // 0x284be0: 0x27a601a4  addiu       $a2, $sp, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284BDCu, 0x284BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BE4u;
label_284be4:
    // 0x284be4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284BE4u;
    SET_GPR_U32(ctx, 31, 0x284BECu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284BE4u, 0x284BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BECu;
label_284bec:
    // 0x284bec: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x284becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x284bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bf4: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x284bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x284bf8: 0x8fa701a0  lw          $a3, 0x1A0($sp)
    ctx->pc = 0x284bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x284bfc: 0xc0a089a  jal         func_282268
    ctx->pc = 0x284BFCu;
    SET_GPR_U32(ctx, 31, 0x284C04u);
    ctx->pc = 0x284C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BFCu;
    // 0x284c00: 0x8fa801a4  lw          $t0, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282268u, 0x284BFCu, 0x284C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C04u;
label_284c04:
    // 0x284c04: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x284C04u;
    {
        const bool branch_taken_0x284c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C04u;
        // 0x284c08: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c04) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284C0Cu;
label_284c0c:
    // 0x284c0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x284c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c14: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284C14u;
    SET_GPR_U32(ctx, 31, 0x284C1Cu);
    ctx->pc = 0x284C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C14u;
    // 0x284c18: 0x24a5a910  addiu       $a1, $a1, -0x56F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284C14u, 0x284C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C1Cu;
label_284c1c:
    // 0x284c1c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x284C1Cu;
    {
        const bool branch_taken_0x284c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284c1c) {
            ctx->pc = 0x284C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284C1Cu;
            // 0x284c20: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284CB4u;
            goto label_284cb4;
        }
    }
    ctx->pc = 0x284C24u;
    // 0x284c24: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x284c24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x284c28: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284c2c: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284c30: 0x27a601a8  addiu       $a2, $sp, 0x1A8
    ctx->pc = 0x284c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x284c34: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284C34u;
    SET_GPR_U32(ctx, 31, 0x284C3Cu);
    ctx->pc = 0x284C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C34u;
    // 0x284c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284C34u, 0x284C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C3Cu;
label_284c3c:
    // 0x284c3c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284C3Cu;
    SET_GPR_U32(ctx, 31, 0x284C44u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284C3Cu, 0x284C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C44u;
label_284c44:
    // 0x284c44: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284c48: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x284c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x284c4c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284C4Cu;
    SET_GPR_U32(ctx, 31, 0x284C54u);
    ctx->pc = 0x284C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C4Cu;
    // 0x284c50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284C4Cu, 0x284C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C54u;
label_284c54:
    // 0x284c54: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284C54u;
    SET_GPR_U32(ctx, 31, 0x284C5Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284C54u, 0x284C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C5Cu;
label_284c5c:
    // 0x284c5c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284c60: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x284c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x284c64: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284C64u;
    SET_GPR_U32(ctx, 31, 0x284C6Cu);
    ctx->pc = 0x284C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C64u;
    // 0x284c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284C64u, 0x284C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C6Cu;
label_284c6c:
    // 0x284c6c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284C6Cu;
    SET_GPR_U32(ctx, 31, 0x284C74u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284C6Cu, 0x284C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C74u;
label_284c74:
    // 0x284c74: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284c7c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284C7Cu;
    SET_GPR_U32(ctx, 31, 0x284C84u);
    ctx->pc = 0x284C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C7Cu;
    // 0x284c80: 0x27a601b4  addiu       $a2, $sp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284C7Cu, 0x284C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C84u;
label_284c84:
    // 0x284c84: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284C84u;
    SET_GPR_U32(ctx, 31, 0x284C8Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284C84u, 0x284C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C8Cu;
label_284c8c:
    // 0x284c8c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x284c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x284c90: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x284c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x284c94: 0x8fa701ac  lw          $a3, 0x1AC($sp)
    ctx->pc = 0x284c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x284c98: 0x2484fcf0  addiu       $a0, $a0, -0x310
    ctx->pc = 0x284c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966512));
    // 0x284c9c: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x284c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x284ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ca4: 0xc0aa3cc  jal         func_2A8F30
    ctx->pc = 0x284CA4u;
    SET_GPR_U32(ctx, 31, 0x284CACu);
    ctx->pc = 0x284CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CA4u;
    // 0x284ca8: 0x8fa901b4  lw          $t1, 0x1B4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8F30u, 0x284CA4u, 0x284CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CACu;
label_284cac:
    // 0x284cac: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x284CACu;
    {
        const bool branch_taken_0x284cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CACu;
        // 0x284cb0: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cac) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284CB4u;
label_284cb4:
    // 0x284cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284cb8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284CB8u;
    SET_GPR_U32(ctx, 31, 0x284CC0u);
    ctx->pc = 0x284CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CB8u;
    // 0x284cbc: 0x24a5a928  addiu       $a1, $a1, -0x56D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284CB8u, 0x284CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CC0u;
label_284cc0:
    // 0x284cc0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x284CC0u;
    {
        const bool branch_taken_0x284cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284cc0) {
            ctx->pc = 0x284CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284CC0u;
            // 0x284cc4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284D58u;
            goto label_284d58;
        }
    }
    ctx->pc = 0x284CC8u;
    // 0x284cc8: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x284cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x284ccc: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284cd0: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284cd4: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x284cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x284cd8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284CD8u;
    SET_GPR_U32(ctx, 31, 0x284CE0u);
    ctx->pc = 0x284CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CD8u;
    // 0x284cdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284CD8u, 0x284CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CE0u;
label_284ce0:
    // 0x284ce0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284CE0u;
    SET_GPR_U32(ctx, 31, 0x284CE8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284CE0u, 0x284CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CE8u;
label_284ce8:
    // 0x284ce8: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284cec: 0x27a601bc  addiu       $a2, $sp, 0x1BC
    ctx->pc = 0x284cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x284cf0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284CF0u;
    SET_GPR_U32(ctx, 31, 0x284CF8u);
    ctx->pc = 0x284CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CF0u;
    // 0x284cf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284CF0u, 0x284CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CF8u;
label_284cf8:
    // 0x284cf8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284CF8u;
    SET_GPR_U32(ctx, 31, 0x284D00u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284CF8u, 0x284D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D00u;
label_284d00:
    // 0x284d00: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284d04: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x284d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x284d08: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284D08u;
    SET_GPR_U32(ctx, 31, 0x284D10u);
    ctx->pc = 0x284D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D08u;
    // 0x284d0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284D08u, 0x284D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D10u;
label_284d10:
    // 0x284d10: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284D10u;
    SET_GPR_U32(ctx, 31, 0x284D18u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284D10u, 0x284D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D18u;
label_284d18:
    // 0x284d18: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284d1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d20: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284D20u;
    SET_GPR_U32(ctx, 31, 0x284D28u);
    ctx->pc = 0x284D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D20u;
    // 0x284d24: 0x27a601c4  addiu       $a2, $sp, 0x1C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284D20u, 0x284D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D28u;
label_284d28:
    // 0x284d28: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284D28u;
    SET_GPR_U32(ctx, 31, 0x284D30u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284D28u, 0x284D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D30u;
label_284d30:
    // 0x284d30: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x284d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x284d34: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x284d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x284d38: 0x8fa701bc  lw          $a3, 0x1BC($sp)
    ctx->pc = 0x284d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x284d3c: 0x2484fcf0  addiu       $a0, $a0, -0x310
    ctx->pc = 0x284d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966512));
    // 0x284d40: 0x8fa801c0  lw          $t0, 0x1C0($sp)
    ctx->pc = 0x284d40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x284d44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x284d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284d48: 0xc0aa3cc  jal         func_2A8F30
    ctx->pc = 0x284D48u;
    SET_GPR_U32(ctx, 31, 0x284D50u);
    ctx->pc = 0x284D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D48u;
    // 0x284d4c: 0x8fa901c4  lw          $t1, 0x1C4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8F30u, 0x284D48u, 0x284D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D50u;
label_284d50:
    // 0x284d50: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x284D50u;
    {
        const bool branch_taken_0x284d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D50u;
        // 0x284d54: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d50) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284D58u;
label_284d58:
    // 0x284d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d5c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284D5Cu;
    SET_GPR_U32(ctx, 31, 0x284D64u);
    ctx->pc = 0x284D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D5Cu;
    // 0x284d60: 0x24a5a940  addiu       $a1, $a1, -0x56C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284D5Cu, 0x284D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D64u;
label_284d64:
    // 0x284d64: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x284D64u;
    {
        const bool branch_taken_0x284d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284d64) {
            ctx->pc = 0x284D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284D64u;
            // 0x284d68: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284DFCu;
            goto label_284dfc;
        }
    }
    ctx->pc = 0x284D6Cu;
    // 0x284d6c: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x284d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x284d70: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284d74: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284d78: 0x27a601c8  addiu       $a2, $sp, 0x1C8
    ctx->pc = 0x284d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x284d7c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284D7Cu;
    SET_GPR_U32(ctx, 31, 0x284D84u);
    ctx->pc = 0x284D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D7Cu;
    // 0x284d80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284D7Cu, 0x284D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D84u;
label_284d84:
    // 0x284d84: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284D84u;
    SET_GPR_U32(ctx, 31, 0x284D8Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284D84u, 0x284D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D8Cu;
label_284d8c:
    // 0x284d8c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284d90: 0x27a601cc  addiu       $a2, $sp, 0x1CC
    ctx->pc = 0x284d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x284d94: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284D94u;
    SET_GPR_U32(ctx, 31, 0x284D9Cu);
    ctx->pc = 0x284D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D94u;
    // 0x284d98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284D94u, 0x284D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D9Cu;
label_284d9c:
    // 0x284d9c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284D9Cu;
    SET_GPR_U32(ctx, 31, 0x284DA4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284D9Cu, 0x284DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DA4u;
label_284da4:
    // 0x284da4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284da8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x284da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x284dac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284DACu;
    SET_GPR_U32(ctx, 31, 0x284DB4u);
    ctx->pc = 0x284DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284DACu;
    // 0x284db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284DACu, 0x284DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DB4u;
label_284db4:
    // 0x284db4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284DB4u;
    SET_GPR_U32(ctx, 31, 0x284DBCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284DB4u, 0x284DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DBCu;
label_284dbc:
    // 0x284dbc: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284dc4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284DC4u;
    SET_GPR_U32(ctx, 31, 0x284DCCu);
    ctx->pc = 0x284DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284DC4u;
    // 0x284dc8: 0x27a601d4  addiu       $a2, $sp, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284DC4u, 0x284DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DCCu;
label_284dcc:
    // 0x284dcc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284DCCu;
    SET_GPR_U32(ctx, 31, 0x284DD4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284DCCu, 0x284DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DD4u;
label_284dd4:
    // 0x284dd4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x284dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x284dd8: 0x8fa601c8  lw          $a2, 0x1C8($sp)
    ctx->pc = 0x284dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x284ddc: 0x8fa701cc  lw          $a3, 0x1CC($sp)
    ctx->pc = 0x284ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x284de0: 0x2484fcf0  addiu       $a0, $a0, -0x310
    ctx->pc = 0x284de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966512));
    // 0x284de4: 0x8fa801d0  lw          $t0, 0x1D0($sp)
    ctx->pc = 0x284de4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x284de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x284de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284dec: 0xc0aa3cc  jal         func_2A8F30
    ctx->pc = 0x284DECu;
    SET_GPR_U32(ctx, 31, 0x284DF4u);
    ctx->pc = 0x284DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284DECu;
    // 0x284df0: 0x8fa901d4  lw          $t1, 0x1D4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8F30u, 0x284DECu, 0x284DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DF4u;
label_284df4:
    // 0x284df4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x284DF4u;
    {
        const bool branch_taken_0x284df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DF4u;
        // 0x284df8: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284df4) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284DFCu;
label_284dfc:
    // 0x284dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e00: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284E00u;
    SET_GPR_U32(ctx, 31, 0x284E08u);
    ctx->pc = 0x284E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E00u;
    // 0x284e04: 0x24a5a958  addiu       $a1, $a1, -0x56A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284E00u, 0x284E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E08u;
label_284e08:
    // 0x284e08: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x284E08u;
    {
        const bool branch_taken_0x284e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284e08) {
            ctx->pc = 0x284E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284E08u;
            // 0x284e0c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284EA0u;
            goto label_284ea0;
        }
    }
    ctx->pc = 0x284E10u;
    // 0x284e10: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x284e10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x284e14: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284e18: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284e1c: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x284e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x284e20: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284E20u;
    SET_GPR_U32(ctx, 31, 0x284E28u);
    ctx->pc = 0x284E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E20u;
    // 0x284e24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284E20u, 0x284E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E28u;
label_284e28:
    // 0x284e28: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284E28u;
    SET_GPR_U32(ctx, 31, 0x284E30u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284E28u, 0x284E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E30u;
label_284e30:
    // 0x284e30: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284e34: 0x27a601dc  addiu       $a2, $sp, 0x1DC
    ctx->pc = 0x284e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x284e38: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284E38u;
    SET_GPR_U32(ctx, 31, 0x284E40u);
    ctx->pc = 0x284E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E38u;
    // 0x284e3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284E38u, 0x284E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E40u;
label_284e40:
    // 0x284e40: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284E40u;
    SET_GPR_U32(ctx, 31, 0x284E48u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284E40u, 0x284E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E48u;
label_284e48:
    // 0x284e48: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284e4c: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x284e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x284e50: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284E50u;
    SET_GPR_U32(ctx, 31, 0x284E58u);
    ctx->pc = 0x284E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E50u;
    // 0x284e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284E50u, 0x284E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E58u;
label_284e58:
    // 0x284e58: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284E58u;
    SET_GPR_U32(ctx, 31, 0x284E60u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284E58u, 0x284E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E60u;
label_284e60:
    // 0x284e60: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284e64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e68: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284E68u;
    SET_GPR_U32(ctx, 31, 0x284E70u);
    ctx->pc = 0x284E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E68u;
    // 0x284e6c: 0x27a601e4  addiu       $a2, $sp, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284E68u, 0x284E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E70u;
label_284e70:
    // 0x284e70: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284E70u;
    SET_GPR_U32(ctx, 31, 0x284E78u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284E70u, 0x284E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E78u;
label_284e78:
    // 0x284e78: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x284e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x284e7c: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x284e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x284e80: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x284e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x284e84: 0x2484fcf0  addiu       $a0, $a0, -0x310
    ctx->pc = 0x284e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966512));
    // 0x284e88: 0x8fa801e0  lw          $t0, 0x1E0($sp)
    ctx->pc = 0x284e88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x284e8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x284e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284e90: 0xc0aa3cc  jal         func_2A8F30
    ctx->pc = 0x284E90u;
    SET_GPR_U32(ctx, 31, 0x284E98u);
    ctx->pc = 0x284E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E90u;
    // 0x284e94: 0x8fa901e4  lw          $t1, 0x1E4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8F30u, 0x284E90u, 0x284E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E98u;
label_284e98:
    // 0x284e98: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x284E98u;
    {
        const bool branch_taken_0x284e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E98u;
        // 0x284e9c: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e98) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284EA0u;
label_284ea0:
    // 0x284ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ea4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284EA4u;
    SET_GPR_U32(ctx, 31, 0x284EACu);
    ctx->pc = 0x284EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284EA4u;
    // 0x284ea8: 0x24a5a970  addiu       $a1, $a1, -0x5690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284EA4u, 0x284EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EACu;
label_284eac:
    // 0x284eac: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x284EACu;
    {
        const bool branch_taken_0x284eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EACu;
        // 0x284eb0: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284eac) {
            ctx->pc = 0x284F3Cu;
            goto label_284f3c;
        }
    }
    ctx->pc = 0x284EB4u;
    // 0x284eb4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x284eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x284eb8: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x284eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x284ebc: 0x27a601e8  addiu       $a2, $sp, 0x1E8
    ctx->pc = 0x284ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x284ec0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284EC0u;
    SET_GPR_U32(ctx, 31, 0x284EC8u);
    ctx->pc = 0x284EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284EC0u;
    // 0x284ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284EC0u, 0x284EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EC8u;
label_284ec8:
    // 0x284ec8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284EC8u;
    SET_GPR_U32(ctx, 31, 0x284ED0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284EC8u, 0x284ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284ED0u;
label_284ed0:
    // 0x284ed0: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284ed4: 0x27a601ec  addiu       $a2, $sp, 0x1EC
    ctx->pc = 0x284ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x284ed8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284ED8u;
    SET_GPR_U32(ctx, 31, 0x284EE0u);
    ctx->pc = 0x284EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284ED8u;
    // 0x284edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284ED8u, 0x284EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EE0u;
label_284ee0:
    // 0x284ee0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284EE0u;
    SET_GPR_U32(ctx, 31, 0x284EE8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284EE0u, 0x284EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EE8u;
label_284ee8:
    // 0x284ee8: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284eec: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x284eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x284ef0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284EF0u;
    SET_GPR_U32(ctx, 31, 0x284EF8u);
    ctx->pc = 0x284EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284EF0u;
    // 0x284ef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284EF0u, 0x284EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EF8u;
label_284ef8:
    // 0x284ef8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284EF8u;
    SET_GPR_U32(ctx, 31, 0x284F00u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284EF8u, 0x284F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F00u;
label_284f00:
    // 0x284f00: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x284f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f08: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284F08u;
    SET_GPR_U32(ctx, 31, 0x284F10u);
    ctx->pc = 0x284F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F08u;
    // 0x284f0c: 0x27a601f4  addiu       $a2, $sp, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284F08u, 0x284F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F10u;
label_284f10:
    // 0x284f10: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284F10u;
    SET_GPR_U32(ctx, 31, 0x284F18u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284F10u, 0x284F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F18u;
label_284f18:
    // 0x284f18: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x284f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x284f1c: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x284f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x284f20: 0x8fa701ec  lw          $a3, 0x1EC($sp)
    ctx->pc = 0x284f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x284f24: 0x2484fcf0  addiu       $a0, $a0, -0x310
    ctx->pc = 0x284f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966512));
    // 0x284f28: 0x8fa801f0  lw          $t0, 0x1F0($sp)
    ctx->pc = 0x284f28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x284f2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x284f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x284f30: 0xc0aa3cc  jal         func_2A8F30
    ctx->pc = 0x284F30u;
    SET_GPR_U32(ctx, 31, 0x284F38u);
    ctx->pc = 0x284F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F30u;
    // 0x284f34: 0x8fa901f4  lw          $t1, 0x1F4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8F30u, 0x284F30u, 0x284F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F38u;
label_284f38:
    // 0x284f38: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x284f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
label_284f3c:
    // 0x284f3c: 0x26b1c230  addiu       $s1, $s5, -0x3DD0
    ctx->pc = 0x284f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951472));
    // 0x284f40: 0x2665a598  addiu       $a1, $s3, -0x5A68
    ctx->pc = 0x284f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944152));
    // 0x284f44: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x284F44u;
    SET_GPR_U32(ctx, 31, 0x284F4Cu);
    ctx->pc = 0x284F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F44u;
    // 0x284f48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x284F44u, 0x284F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F4Cu;
label_284f4c:
    // 0x284f4c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x284F4Cu;
    SET_GPR_U32(ctx, 31, 0x284F54u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x284F4Cu, 0x284F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F54u;
label_284f54:
    // 0x284f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f58: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x284F58u;
    SET_GPR_U32(ctx, 31, 0x284F60u);
    ctx->pc = 0x284F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F58u;
    // 0x284f5c: 0x26c5a5a0  addiu       $a1, $s6, -0x5A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x284F58u, 0x284F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F60u;
label_284f60:
    // 0x284f60: 0x5440fc1d  bnel        $v0, $zero, . + 4 + (-0x3E3 << 2)
    ctx->pc = 0x284F60u;
    {
        const bool branch_taken_0x284f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284f60) {
            ctx->pc = 0x284F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284F60u;
            // 0x284f64: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283fd8;
        }
    }
    ctx->pc = 0x284F68u;
    // 0x284f68: 0xae802bd0  sw          $zero, 0x2BD0($s4)
    ctx->pc = 0x284f68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11216), GPR_U32(ctx, 0));
    // 0x284f6c: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x284f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x284f70: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x284f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x284f74: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x284f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x284f78: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x284f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x284f7c: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x284f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x284f80: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x284f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x284f84: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x284f84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x284f88: 0xdfbf0238  ld          $ra, 0x238($sp)
    ctx->pc = 0x284f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x284f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x284F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F8Cu;
        // 0x284f90: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284F94u;
    // 0x284f94: 0x0  nop
    ctx->pc = 0x284f94u;
    // NOP
    ctx->pc = 0x284f98u;
}
